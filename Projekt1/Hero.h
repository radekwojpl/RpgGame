#pragma once	
#include <iostream>
#include <string>
#include "Statistics.h"
#include "Equipment.h"

using namespace std;


class Hero
{
private:
	int lvl = 1;
	int PD  = 0;
	int nextLevelPD=10;
	string name;
	string heroProfession;
	Statistics heroStatistisc;
public:
	void printInfoAboutHero();
	void setName(string);
	void setHeroProfession(string);
	string getName();
	string getHeroProfession();
	int getPD();
	int getNextLevelPD();
	void createHero();
	void choseProfession();
	Hero(string , string);
	Hero();
	~Hero();
};
