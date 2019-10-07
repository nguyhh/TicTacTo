#pragma once

#include <stdio.h>
#include <string>
#include "Player.h"
#include "Board.h"


using namespace std;

class Game {
public:
	Player* player1;
	Player* player2;
	Board* board;

	Game();
	//Game(Player*, Player*);
	void startGame();

};