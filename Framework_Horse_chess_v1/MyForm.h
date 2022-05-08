#pragma once



namespace FrameworkHorsechessv1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ PictureBoxHorse;


	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::TextBox^ textBoxHorse;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxPoint;
	private: System::Windows::Forms::Label^ label2;






	private:

	private:

	private:

	private:

	private:

	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBoxHorse = (gcnew System::Windows::Forms::PictureBox());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->textBoxHorse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPoint = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxHorse))->BeginInit();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 300);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// PictureBoxHorse
			// 
			this->PictureBoxHorse->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->PictureBoxHorse->Location = System::Drawing::Point(41, 261);
			this->PictureBoxHorse->Name = L"PictureBoxHorse";
			this->PictureBoxHorse->Size = System::Drawing::Size(24, 24);
			this->PictureBoxHorse->TabIndex = 1;
			this->PictureBoxHorse->TabStop = false;
			this->PictureBoxHorse->UseWaitCursor = true;
			this->PictureBoxHorse->Visible = false;
			this->PictureBoxHorse->Click += gcnew System::EventHandler(this, &MyForm::PictureBoxHorse_Click);
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(108, 385);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(90, 40);
			this->buttonStart->TabIndex = 3;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->UseWaitCursor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// textBoxHorse
			// 
			this->textBoxHorse->Location = System::Drawing::Point(12, 334);
			this->textBoxHorse->Name = L"textBoxHorse";
			this->textBoxHorse->Size = System::Drawing::Size(100, 20);
			this->textBoxHorse->TabIndex = 4;
			this->textBoxHorse->UseWaitCursor = true;
			this->textBoxHorse->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxHorse_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 315);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Координаты коня";
			this->label1->UseWaitCursor = true;
			// 
			// textBoxPoint
			// 
			this->textBoxPoint->Location = System::Drawing::Point(195, 334);
			this->textBoxPoint->Name = L"textBoxPoint";
			this->textBoxPoint->Size = System::Drawing::Size(100, 20);
			this->textBoxPoint->TabIndex = 6;
			this->textBoxPoint->UseWaitCursor = true;
			this->textBoxPoint->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPoint_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(182, 315);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Координаты точки";
			this->label2->UseWaitCursor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 461);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPoint);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxHorse);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->PictureBoxHorse);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->UseWaitCursor = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxHorse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//.........
	//Данные игры
	
    public: float step = 32;//шаг
	private: float updateInterval = 500; //Интервал обновления 


	//............
	//Объекты на форме

    private: System::Void PictureBoxHorse_Click(System::Object^ sender, System::EventArgs^ e);//конь
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);//Кнопка старт
	private: System::Void textBoxHorse_TextChanged(System::Object^ sender, System::EventArgs^ e);//координаты коня
	private: System::Void textBoxPoint_TextChanged(System::Object^ sender, System::EventArgs^ e);//координаты точки

	//.............
	//Действия игры
	private: void RunHorse();//Движение коня
	private: bool PlacementOfobjects();//Устанавливает положение коня на форме

    //Cобытие по обновлению игры в timer
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e);

};
}
