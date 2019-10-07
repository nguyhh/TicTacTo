#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Game.h"

using namespace std;


Game::Game() {
	board = new Board();
	playerTurn = 0;

	string name1;
	string name2;
	cout << "Welcome to Tic-Tac-Toe" << endl;

	try
	{
		cout << "What is your name Player X?" << endl;
		cin >> name1;
		cout << "What is your name Player 2? " << endl;
		cin >> name2;

	}
	catch (const std::exception&)
	{
		cout << "Invalid name!!! Game will exit..." << endl;
		exit(0);
	}

	players[0] = player1 = new Player(name1, 'X');//initialize player 1
	players[1] = player2 = new Player(name2, 'O');//initialize player 2


}

Game::~Game() {};

//Start the game process
void Game::startGame() {

	do
	{
		if (board->checkDraw()) {
			cout << "It's a tie!!" << endl;
			exit(0);
		}
		board->showInstruction(players[playerTurn]);

		playerTurn = (playerTurn + 1) % 2;//Alternate players


	} while (!(board->checkWin()));//Continue until someone wins 

	cout << "Game Over!" + *(players[playerTurn]->playerName) + " won!" << endl;


}
