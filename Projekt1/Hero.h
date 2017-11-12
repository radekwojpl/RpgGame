#pragma once	
#include <iostream>
#include <string>
#include "Statistics.h"
#include "Equipment.h"
#include "Tavern.h"
#include <cmath>
#include <random>

using namespace std;



class Hero
{
	friend class Tavern;
private:
	int lvl = 1;
	int currentPD  = 10;
	int nextLevelPD = 10;
	string name;
	string heroProfession;
public:
	int strongAttack();
	
	int lightAttack();

	bool isHeroHitTheTarget();
	bool isNextLevelAvailable();

	Statistics heroStatistisc;
	
	void printInfoAboutHero();
	
	void setName(string);
	void setHeroProfession(string);
	
	string getName();
	string getHeroProfession();

	int getLvl();	
	int getCurrentPD();
	void setCurentPDToZero();
	int getNextLevelPD();
	
	void increaseLvl();
	void levelUp();
	void createHero();
	void choseProfession();
	
	Hero(string , string);
	Hero();
	~Hero();
};
