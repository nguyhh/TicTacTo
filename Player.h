#pragma once

#include <stdio.h>
#include <string>
using namespace std;

class Player {

public:
	string* playerName;
	char* playerSymbol;

	Player(string, char);
	~Player();

};