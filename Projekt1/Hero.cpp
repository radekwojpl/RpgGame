#include "Hero.h"



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

void Hero::createHero()
{
	string name;
	cout << "Enter hero name-->";
	getline(cin, name);
	this->setName(name);
	this->choseProfession();
	
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


