#pragma once

#include <stdio.h>
#include <string>
#include "Player.h"

using namespace std;

Player::Player(string name, char symbol) {
	playerName =new string(name);
	playerSymbol = new char(symbol);
}

Player::~Player(){}


