#include <iostream>
#include <string>
#include "Tavern.h"
#include <Windows.h>

#include "RpgGame.h"

using namespace std;

void setCursorr(short int x, short int y);


int main()
{
	Hero Player;
	Tavern Tavern;

	int choice;
	cout << endl;
	int exitStatus = 7;
	cout << "Create your hero\n";
	Player.createHero();
	system("cls");
	do
	{
		cout << "\n1. Print hero statistics\n"
			<< "3. Arena\n" 
			<< "4. Boss\n"
			<< "5. Shop\n"
			<< "6. Tavern\n"
			<< "7. Exit" << endl;
		cout << "Your choice--->";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			Player.printInfoAboutHero();
			system("pause");
			system("cls");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			system("cls");
			Tavern.printTavernMenu(Player);
			system("cls");
			break;
		case 7:
			cout << "End of Game.\n";
			break;
		default:
			cout << "Not a valid choice\n"
				<< "Choose again\n";
			break;
		}

	} while (choice != exitStatus);


	system("pause");
	return 0;
}

void setCursorr(short int x, short int y)
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}



