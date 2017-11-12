#pragma once
#include <iostream>
#include <string>
#include "Hero.h"
#include <Windows.h>

using namespace std;

class Hero;
void setCursorr(short int x, short int y);

class Tavern
{
public:
	void printTavernMenu(Hero&);
	void restoreHeroHealth(Hero&);
	void restoreHeroMana(Hero&);
	void heroLevelUp(Hero&);
	Tavern();
	~Tavern();
};

