#include "Tavern.h"



void Tavern::printTavernMenu(Hero &Player)
{
	int tavernChoice;
	int exitStatus = 4;

	do
	{
		cout << "\n"
			<< "Hero lvl: " << Player.getLvl()
			<< "\nYour current health: " << Player.heroStatistisc.getHealth()
			<< "\nYour current mana: " << Player.heroStatistisc.getMana();
		cout << endl << endl;
		cout << "1. Drink beer\n"
			<< "2. Level up\n"
			<< "3. Eat some food\n"
			<< "4. Exit\n"
			<< "What do u want?-->";
		cin >> tavernChoice;
		switch (tavernChoice)
		{
		case 1:
			system("cls");
			restoreHeroMana(Player);
			break;
		case 2:
			system("cls");
			heroLevelUp(Player);
			break;
		case 3:
			system("cls");
			restoreHeroHealth(Player);
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (tavernChoice != exitStatus);
	
}

void Tavern::restoreHeroHealth(Hero &Player)
{
	int basicHealth = 100;
	int maxHealth = Player.getLvl()*basicHealth;
	int curentHealth = Player.heroStatistisc.getHealth();
	if (curentHealth < maxHealth)
	{
		if (maxHealth - curentHealth <= 10)
			Player.heroStatistisc.setHealth(maxHealth);
		else
			Player.heroStatistisc.setHealth(curentHealth + 10);
	}
	else
	{
		cout << "\n\nYou dont need healing right now!\n\n";
	}
}

void Tavern::restoreHeroMana(Hero &Player)
{
	
	int maxMana = 100;
	int currentMana = Player.heroStatistisc.getMana();
	if (currentMana < maxMana)
	{
		if (maxMana - currentMana <= 10)
			Player.heroStatistisc.setMana(maxMana);
		else
			Player.heroStatistisc.setMana(currentMana + 10);
	}
	else
	{
		cout << "\n\nYou have max mana\n\n";
	}
}

void Tavern::heroLevelUp(Hero &Player)
{
	string profession = Player.getHeroProfession();
	if (Player.isNextLevelAvailable())
	{
		Player.increaseLvl();
		Player.heroStatistisc.increasStatisticsIfHeroLevelUp(profession);
		Player.setCurentPDToZero();
	}
	else
		cout << "\n\nYou dont have enought PD to level up\n\n";
	
}

Tavern::Tavern()
{
}


Tavern::~Tavern()
{
}
