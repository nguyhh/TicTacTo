#include <stdio.h>
#include "Board.h"
#include <iostream>>
using namespace std;

Board::Board(){
	upLeft = new char(' ');
	upMiddle = new char(' ');
	upRight = new char(' ');
	midLeft = new char(' ');
	center = new char(' ');
	midRight = new char(' ');
	bottomLeft = new char(' ');
	bottomMid = new char(' ');
	bottomRight = new char(' ');
	
	cout << positions[0] << endl;
}

void Board::showInstruction() {
	cout << "Choose your position" << endl;
	cout << " 1 | 2 | 3 " << endl;
	cout << "---+---+---" << endl;
	cout << " 4 | 5 | 6 " << endl;
	cout << "---+---+---" << endl;
	cout << " 7 | 8 | 9 " << endl;
}

void Board::showBoard() {
	printf(" %c | %c | %c \n", upLeft, upMiddle, upRight);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", midLeft, center, midRight);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", bottomLeft, bottomMid, bottomRight);

}

void Board::choosePosition(int position, char player) {
	cout << "Position chosen is : " + position << endl;
	cout << "correspond to : "+ *positions[position - 1] << endl
}
//Board::drawBoard() {
//	printf("Hello");
//}

//void Board::drawBoard() {
//	char upLeft = ' ';
//	char upMiddle = ' ';
//	char upRight = ' ';
//	char midLeft = ' ';
//	char center = ' ';
//	char midRight = ' ';
//	char bottomLeft = ' ';
//	char bottomMid = ' ';
//	char bottomRight = ' ';
//	printf(" %c | %c | %c \n", upLeft, upMiddle, upRight);
//	printf("---|---|---\n");
//	printf(" %c | %c | %c \n", midLeft, center, midRight);
//	printf("---|---|---\n");
//	printf(" %c | %c | %c \n", bottomLeft, bottomMid, bottomRight);
//
//}

//Board::drawBoard(){
//	printf(" %c | %c | %c \n", upLeft, upMiddle, upRight);
//	printf("---|---|---\n");
//	printf(" %c | %c | %c \n", midLeft, center, midRight);
//	printf("---|---|---\n");
//	printf(" %c | %c | %c \n", bottomLeft, bottomMid, bottomRight);
//
//}

//Board::setPosition(){
//
//}