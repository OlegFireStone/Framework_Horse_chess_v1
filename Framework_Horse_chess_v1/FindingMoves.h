
#pragma once
#include <iostream>
#include <queue>

#include"RightMoves.h"

using namespace std;
using namespace System;

class FindingMoves {
public:

    int nx, ny, mx, my;
    int dx[8] = { -2, -2, -1, -1,  1,  1,  2,  2 };
    int dy[8] = { -1,  1, -2,  2, -2,  2, -1,  1 };

    bool overlap(int mx, int my, int nx, int ny) {
        if (mx < 0 || mx > 7) return false;
        if (my < 0 || my > 7) return false;
        if (nx < 0 || nx > 7) return false;
        if (ny < 0 || ny > 7) return false;
        return mx == nx && my == ny;
    }


    int knight(System::String^ pos1, System::String^ pos2, int* arrXoriginal, int* arrYoriginal) {

        RightMoves rightMoves;
        rightMoves.PointerArray(arrXoriginal, arrYoriginal);

        queue<int> runX;
        queue<int> runY;

        nx = pos1[0] - 'a';
        ny = pos1[1] - '1';
        mx = pos2[0] - 'a';
        my = pos2[1] - '1';

        runX.push(nx);
        runY.push(ny);


        for (int i = 0; i < 8; i++) {

            runX.push(runX.front() + dx[i]);
            runY.push(runY.front() + dy[i]);
            if (overlap(runX.back(), runY.back(), mx, my)) {
                rightMoves.Way_ok(dx, dy, runX);

                if (rightMoves.IsOk(nx, ny)) {
                    break;
                }
            }
            if (i == 7) {
                runX.pop();
                runY.pop();
                rightMoves.deletedElements++;
                if (pow(8, rightMoves.numberMoves) <= runX.size()) { ++rightMoves.numberMoves; }
                i = -1;
            }
        }

        return  rightMoves.numberMoves;
    }
};
