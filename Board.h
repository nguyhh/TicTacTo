#pragma once

#include <stdio.h>
#include <string>
#include "Board.cpp"
using namespace std;


class Board {
	

public:
	char *upLeft, *upMiddle, *upRight, *midLeft, *center, *midRight, *bottomLeft, *bottomMid, *bottomRight;
	char* positions[9]= { upLeft, upMiddle, upRight, midLeft, center, midRight, bottomLeft, bottomMid, bottomRight };


	void showInstruction();
	void showBoard();
	void choosePosition(int, char);
	//void checkWin();



};
