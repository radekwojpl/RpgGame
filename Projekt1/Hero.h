#pragma once	
#include <iostream>
#include <string>
#include "Statistics.h"

using namespace std;





class Hero
{
private:
	int lvl = 1;
	string name;
	string heroProfession;
	Statistics heroStatistisc;
	
public:
	void printInfoAboutHero();
	void setName(string);
	void setHeroProfession(string);
	void createHero();
	void choseProfession();
	Hero(string , string);
	Hero();
	~Hero();
};
