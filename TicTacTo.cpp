// TicTacTo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include <string>
#include "Board.h"
#include "Player.h"

using namespace std;



int main()
{
	Player* players[2];
	Player* player1;
	Player* player2;
	string name1;
	string name2;
	cout << "Welcome to Tic-Tac-Toe" << endl;
	cout << "What is your name Player X?"<< endl;
	std::cin >> name1;
	players[0] = player1 = new Player(name1, 'X');

	cout << "What is your name Player 2? " << endl;
	std::cin >> name2;
	players[1] = player2 = new Player(name2, 'O');

	int playerTurn = 0;

	Board* board = new Board();

	do
	{
		board->showInstruction(players[playerTurn]);
		playerTurn = (playerTurn + 1) % 2;


	} while (!(board->checkWin()));

	cout << "Game Over!" + *(players[playerTurn]->playerName) + " won!" << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
