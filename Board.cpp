#pragma once
#include <stdio.h>
#include <iostream>>
#include "Board.h"

using namespace std;

struct InputException : public std::exception {
	const char* what() const throw () {
		return "You have to choose between 1 and 9!";
	};

};

Board::Board(){
	positions[0] = upLeft = new char(' ');
	positions[1] = upMiddle = new char(' ');
	positions[2] = upRight = new char(' ');
	positions[3] = midLeft = new char(' ');
	positions[4] = center = new char(' ');
	positions[5] = midRight = new char(' ');
	positions[6] = bottomLeft = new char(' ');
	positions[7] = bottomMid = new char(' ');
	positions[8] = bottomRight = new char(' ');
	
}

Board::~Board() {};

//Show the instructions and let player choose position
void Board::showInstruction(Player* whoPlaying) {
	int inputPosition;
	do
	{

		try
		{
			cout << *whoPlaying->playerName + "! Choose your position" << endl;
			cout << " 1 | 2 | 3 " << endl;
			cout << "---+---+---" << endl;
			cout << " 4 | 5 | 6 " << endl;
			cout << "---+---+---" << endl;
			cout << " 7 | 8 | 9 " << endl;


			cin >> inputPosition;
			
			if (inputPosition < 1 || inputPosition>9)// Catch if input is not between 1 and 9
			{
				cout << "You have to choose between 1 and 9." << endl;
				throw InputException();
			}

		}
		catch (const std::exception&)//This allow to catch other exception including non integer input
		{
			cout << inputPosition << endl;
			cout << "Input is invalid!!! Game will exit..." << endl;
			exit(0);
		}


	} while (!(*positions[inputPosition-1]==' '));// If player choose a square that has already been chosen

	choosePosition(inputPosition, *whoPlaying->playerSymbol);
}

//Display the current game board
void Board::showBoard() {

	printf(" %c | %c | %c \n", *upLeft, *upMiddle, *upRight);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", *midLeft, *center, *midRight);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", *bottomLeft, *bottomMid, *bottomRight);

}

//Modify the position with the symbol of the player
void Board::choosePosition(int position, char player) {

	*(positions[position - 1]) = player;
	showBoard();
}

bool Board::checkWin() {
	return((*upLeft !=' ' && *upLeft== *upMiddle && *upLeft == *upRight ) ||//check top
		(*center != ' ' && *midLeft == *center && *center == *midRight) ||//check center
		(*bottomLeft != ' ' && *bottomLeft == *bottomMid && *bottomLeft== *bottomRight) || //check bottom
		(*upLeft !=' ' && *upLeft== *midLeft && *upLeft == *bottomLeft)|| // check Left vertical
		(*upMiddle !=' ' && *upMiddle == *center && *upMiddle ==*bottomMid)||//check middle vertical
		(*upRight != ' ' && *upRight == *midRight && *upRight == *bottomRight)||//check right vertical
		(*center != ' ' && *upLeft == *center && *center == *bottomRight) || //check diagonals
		(*center != ' ' && *bottomLeft == *center && *center == *upRight));//check diagonals
}

