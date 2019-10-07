#pragma once

#include <stdio.h>
#include <string>
#include "Player.h"
#include "Board.h"


using namespace std;


class Game {

public:
	Player* players[2];
	Player* player1;
	Player* player2;
	int playerTurn;
	Board* board;

	Game();
	~Game();
	void startGame();

};