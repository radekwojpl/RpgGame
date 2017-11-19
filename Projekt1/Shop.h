#pragma once
#include "Hero.h"
#include <iostream>

using namespace std;

class Hero;

class Shop
{
public:
	void printShopMenu(Hero &);
	Shop();
	~Shop();
};

