#pragma once
#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;

class Hero;

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

