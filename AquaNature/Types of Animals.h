
#pragma once
#include <iostream>
#include <string>
using namespace std;
struct ANIMAL {
	string type;
	string habitat;
	string traits;

};



//This function outputs information about krills
void Krill() {
	cout << "Type: Krill Euphausiacea " << endl;
	cout << "Habitat: The Southern Ocean" << endl;
	cout << "Traits: Individuals do not exceed 2 cm in length " << endl;
	
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Blue Whales
void BlueWhale() {
	cout << "Type: Blue whale " << endl;
	cout << "Habitat: Every ocean" << endl;
	cout << "Traits: It reaches up to 30 m in length and weights over 100 tons" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Corals
void Corals() {
	cout << "Type: Corals " << endl;
	cout << "Habitat: Reefs" << endl;
	cout << "Traits: They are covered with calcareous growths" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Piranha
void Piranha() {
	cout << "Type: Piranha" << endl;
	cout << "Habitat: South American rivers" << endl;
	cout << "Traits: They attack their prey in groups in a very aggressive way" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Dolphin
void Dolphin() {
	cout << "Type: Dolphin" << endl;
	cout << "Habitat: Most oceans" << endl;
	cout << "Traits: They are very intelligent animals that use sound to locate objects in while moving " << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function lets you choose for which type of fish to read about
void Info2() {
	int choice;
	cout << "Choose Species" << endl;
	cout << "1) Krill" << endl;
	cout << "2) Blue Whale" << endl;
	cout << "3) Corals " << endl;
	cout << "4) Piranha" << endl;
	cout << "5) Dolphins" << endl;
	cout << endl;

	cin >> choice;
	switch (choice) {
	case 1:
		Krill();
		break;
	case 2:
		BlueWhale();
		break;
	case 3:
		Corals();
		break;
	case 4:
		Piranha();
		break;
	case 5:
		Dolphin();
		break;

	default:
		cout << "Invalid choice! Try again. ";
		cin.clear();
		cin >> choice;

	}
}



//In this function you can add info about new species
void addSpecies(ANIMAL fish[]) {
	int riba;
	cout << "How many areas would you like to add: ";
	cin >> riba;
	for (int i = 0; i < riba; i++) {
		cout << "Enter type: ";
		cin >> fish[i].type;
		cout << "Enter habitat: ";
		cin >> fish[i].habitat;
		cout << "Enter traits: ";
		cin >> fish[i].traits;
		
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < riba; i++) {
		cout << "|| Type: " << fish->type << " ||" << endl;
		cout << "|| Habitat " << fish->habitat << " ||" << endl;
		cout << "|| Traits " << fish->traits << " ||" << endl;
		cout << "|| You have successfully added: " << fish[i].type << " ||" << endl;;
		system("pause");
		system("cls");
	}
}



//This the main menu
void menu2() {
	int choice;
	ANIMAL fish[3];
	do {
		cout << "---------------------------------" << endl;
		cout << "===========AQUA NATURE===========" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "||           MAIN MENU         ||" << endl;
		cout << "||1)      Types of Animals     ||" << endl;
		cout << "||2)        Add species        ||" << endl;
		cout << "||3)       Exit the menu       ||" << endl;
		cout << endl;
		cout << "---------------------------------" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			Info2();
			break;
		case 2:
			addSpecies(fish);

			break;
		case 3:
			cout << "You exited the menu successfully!" << endl;
			break;
		default:
			cout << "Wrong choice. Try again! ";
			cin >> choice;
		}
	} while (choice != 3);
}