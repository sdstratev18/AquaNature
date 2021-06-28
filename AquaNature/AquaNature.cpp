#include "Types Of Animals.h"
#include "ProtectedAreas.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//This the main menu of the program
int main() {
	int choice;
	
	do {
		cout << "---------------------------------" << endl;
		cout << "===========AQUA NATURE===========" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "||           MAIN MENU         ||" << endl;
		cout << "||1)      Protected areas      ||" << endl;
		cout << "||2)      Types of Animlas     ||" << endl;
		cout << "||3)     Endangered species    ||" << endl;
		cout << "||4)      Exit the program     ||" << endl;
		cout << endl;
		cout << "---------------------------------" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			menu1();
			break;
		case 2:
			menu2();
			break;
		case 3:
			menu2();
			break;
		case 4:
			cout << "You exited the program successfully!" << endl;
			break;

		default:
			cout << "Wrong choice. Try again! ";
			cin >> choice;
		}
	} while (choice != 4);


	
}

