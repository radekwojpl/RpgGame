#pragma once
#include <iostream>
#include <string>
using namespace std;
class Statistics
{
	int health;
	int strenght;
	int agility;
	int intelligence;
	
public:
	void setHealth(int);
	void setStrenght(int);
	void setAgility(int);
	void serIntelligence(int);
	void setStatisticsDependsOnProfession(string);
	void printStat();
	Statistics();
	~Statistics();
};

