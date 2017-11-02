#include <iostream>
#include <string>

using namespace std;

//test do gita9 proba123


int main()
{
	int choice;
	cout << endl;
	int exitStatus = 7;
	do
	{
		cout << "1. Make hero\n"
			<< "2. Print hero statistics\n"
			<< "3. Arena\n"
			<< "4. Boss\n"
			<< "5. Shop\n"
			<< "6. Tavern"
			<< "7. Exit" << endl;
		cout << "Your choice--->";
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
		case 6:
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