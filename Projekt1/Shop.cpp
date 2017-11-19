#include "Shop.h"



void Shop::printShopMenu(Hero& Player)
{
	int choice;
	int exitStatus = 5;
	do
	{
		cout << "Here u can buy what u want!\n"
			 << "1. Buy main weapon\n"
			 << "2. Buy secound weapon\n"
			 << "3. Buy armor\n"
			 << "4. Buy potions\n"
			 << "5. Exit\n"
			 << "What do u want---->";
		cin >> choice;
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "\nWrong choice\n\n";
			break;
		}

	} while (choice != exitStatus);
}

Shop::Shop()
{
}


Shop::~Shop()
{
}
