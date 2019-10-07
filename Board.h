#pragma once

#include <stdio.h>
#include <string>
#include "Player.h"
using namespace std;


class Board {
	

public:
	char *upLeft, *upMiddle, *upRight, *midLeft, *center, *midRight, *bottomLeft, *bottomMid, *bottomRight;
	char* positions[9];
	
	Board();
	~Board();

	void showInstruction(Player*);
	void showBoard();
	void choosePosition(int, char);
	bool checkWin();
	bool checkDraw();



};
