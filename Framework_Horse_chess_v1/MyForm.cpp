
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FrameworkHorsechessv1::MyForm form;
	Application::Run(% form);
}

#include "FindingMoves.h"
#include "RightMoves.h"


struct Vector2
{
	int x, y;
};

Vector2 positionHorse;
Vector2 positionPoint;

int sizeTravel = 6;//Число ходов коня
int arrX[6] = { 0,0,0,0,0,0 };
int arrY[6] = { 0,0,0,0,0,0 };
int index = 0;

//...........
//Конструктор

FrameworkHorsechessv1::MyForm::MyForm(void)
{
	InitializeComponent();
	
	positionHorse.x = 43;
	positionHorse.y = 263;

	
	PictureBoxHorse->Location = Point(positionHorse.x, positionHorse.y);
	PictureBoxHorse->BackColor = Color::Red;
	PictureBoxHorse->Width = 20;
	PictureBoxHorse->Height = 20;

}

//............
//Действия

void FrameworkHorsechessv1::MyForm::RunHorse()
{
		PictureBoxHorse->Location = Point(PictureBoxHorse->Location.X + arrX[index] * step, PictureBoxHorse->Location.Y - arrY[index] * step);
		index++;
}

bool FrameworkHorsechessv1::MyForm::PlacementOfobjects() {
	int nx, ny, mx, my;
	
	String^ str = textBoxHorse->Text;
	String^ str2 = textBoxPoint->Text;

	nx = str[0] - 'a';
	ny = str[1] - '1';
	mx = str2[0] - 'a';
	my = str2[1] - '1';

	if (nx < 0 || nx>7 || ny < 0 || ny>7 || mx < 0 || mx>7 || my < 0 || my>7 || str->Length > 2 || str2->Length > 2) {
		MessageBox::Show("Неправильно введены координаты");
		return false;
	}

	positionHorse.x = 41 + nx*step;
	positionHorse.y = 261 - ny*step;
	PictureBoxHorse->Location = Point(positionHorse.x, positionHorse.y);
	return true;
}

//............
//Объекты на форме
System::Void FrameworkHorsechessv1::MyForm::PictureBoxHorse_Click(System::Object^ sender, System::EventArgs^ e){
	return System::Void();
}

System::Void FrameworkHorsechessv1::MyForm::buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {

	if (PlacementOfobjects()) {
	
	FindingMoves findingMoves;
	sizeTravel = findingMoves.knight(textBoxHorse->Text, textBoxPoint->Text, arrX, arrY);
	//MessageBox::Show(arrX[0] + " " + arrX[1] + " " + arrX[2] + " " + arrX[3] + " " + arrX[4] + " " + arrX[5]);
	//MessageBox::Show(arrY[0] + " " + arrY[1] + " " + arrY[2] + " " + arrY[3] + " " + arrY[4] + " " + arrY[5]);
	
	PictureBoxHorse->Visible = true;

	//Задаём интервал обновления и запускаем таймер для обновления
	timer->Interval = updateInterval;
	timer->Start();

	buttonStart->Enabled = false;
	}

	return System::Void();
	
}

System::Void FrameworkHorsechessv1::MyForm::textBoxHorse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	return System::Void();
}

System::Void FrameworkHorsechessv1::MyForm::textBoxPoint_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	return System::Void();
}

//........
//Cобытие по обновлению игры в timer
System::Void FrameworkHorsechessv1::MyForm::timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (index < sizeTravel) {
		RunHorse();
	}
	else {
		timer->Stop();
		index = 0;
		//MessageBox::Show("Игра приостановлена!");
		buttonStart->Enabled = true;
		
	}
}



