#pragma once

#include <iostream>
#include <string>
#include "Player.h"
#include "Board.h"
#include "Game.h"

using namespace std;

Game::Game() {
	board = new Board();
	cout << "Welcome to Tic-Tac-Toe" << endl;

	string inputName1;
	string inputName2;

	cout << "Who is player X?" << endl;
	cin >> inputName1;
	player1 = new Player(inputName1, 'X');

	cout << "Who is player O?" << endl;
	cin >> inputName2;
	player2 = new Player(inputName2, 'O');

}
//Game::Game( Player* p1, Player* p2) {
//	player1 = p1;
//	player2 = p2;
//	this->board = board;
//}

void Game::startGame() {





}
