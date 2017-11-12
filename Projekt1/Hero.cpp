#include "Hero.h"




int Hero::strongAttack()
{
	return 15 ;
}

bool Hero::isHeroHitTheTarget()
{
	random_device rd;
	mt19937 eng(rd());
	uniform_int_distribution<> hitRateTableRange(1, 10);

	int hitRateTable[10] = { 0,1,1,0,1,0,1,1,0,1 };

	int isHit = hitRateTableRange(eng);

	if (hitRateTable[isHit]==0)
		return false;
	else
		return true;
}

int Hero::lightAttack()
{
	return 10;
}

void Hero::increaseLvl()
{
	this->lvl += 1;
}

void Hero::levelUp()
{
	if (this->isNextLevelAvailable() == true)
	{
		this->lvl += 1;
		this->heroStatistisc.increasStatisticsIfHeroLevelUp(this->getHeroProfession());
	}
}

bool Hero::isNextLevelAvailable()
{
	if (this->currentPD == this->nextLevelPD)
		return true;
	else
		return false;
}

void Hero::printInfoAboutHero()
{
	cout << endl;
	cout << "///////////////////////////////\n";
	cout << "lvl:" << this->lvl<<endl;
	cout << "Hero name-->" << this->name << endl;
	cout << "Hero profession-->" << this->heroProfession << endl;
	this->heroStatistisc.printStat();
	cout << endl;
	cout << "/////////////////////////////////"<<endl;

}

void Hero::setName(string name)
{
	this->name = name;
}

void Hero::setHeroProfession(string heroProfession)
{
	this->heroProfession = heroProfession;
}

string Hero::getName()
{
	return this->name;
}

string Hero::getHeroProfession()
{
	return this->heroProfession;
}

int Hero::getLvl()
{
	return this->lvl;
}

int Hero::getCurrentPD()
{
	return this->currentPD;
}

void Hero::setCurentPDToZero()
{
	this->currentPD = 0;
}

int Hero::getNextLevelPD()
{
	return this->nextLevelPD;
}

void Hero::createHero()
{
	string name;
	cout << "Enter hero name-->";
	getline(cin, name);
	this->setName(name);
	this->choseProfession();
	this->heroStatistisc.setStartingStatisticsDependsOnProfession(this->heroProfession);
	
}

void Hero::choseProfession()
{
	int chose;
	cout << "Chose hero profession\n"
		<< "1. warrior\n"
		<< "2. mage\n"
		<< "3. paladin\n";
	cout << "Your profesion-->";
	do
	{
		cin >> chose;
		switch (chose)
		{
		case 1:
			this->setHeroProfession("warrior");
			break;
		case 2:
			this->setHeroProfession("mage");
			break;
		case 3:
			this->setHeroProfession("paladin");
			break;
		}
	} while (chose>3 || chose< 0);
}

Hero::Hero(string name, string heroProfession)
{
	this->name = name;
	this->heroProfession = heroProfession;
	this->heroStatistisc;
}

Hero::Hero()
{
}

Hero::~Hero()
{
}


