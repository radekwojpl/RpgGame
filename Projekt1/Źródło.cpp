#include <iostream>
#include <string>
#include "Tavern.h"

#include "RpgGame.h"

using namespace std;


int main()
{
	Hero Player;
	Tavern Tavern;

	int choice;
	cout << endl;
	int exitStatus = 7;
	cout << "Create your hero\n";
	Player.createHero();
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
			Player.printInfoAboutHero();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			Tavern.printTavernMenu(Player);
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





