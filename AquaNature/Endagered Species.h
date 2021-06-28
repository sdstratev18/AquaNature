
#pragma once
#include <iostream>
#include <string>
using namespace std;
struct EndageredSpecies {
	string name;
	string habitat;
	int count{};

};



//This function outputs information about Vaquita Phocoena sinus
void Vaquita() {
	cout << "Name: Vaquita Phocoena sinus" << endl;
	cout << "Habitat: The Gulf of California" << endl;
	cout << "Count: 15" << endl;

	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Mediterranean monk seal
void MonkSeal() {
	cout << "Name: Mediterranean monk seal" << endl;
	cout << "Habitat: The Aegean Sea" << endl;
	cout << "Count: 630" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Sea Otter
void SeaOtter() {
	cout << "Name: Sea Otter" << endl;
	cout << "Habitat: The North Pacific Ocean" << endl;
	cout << "Count: 100000" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Giant otter
void GiantOtter() {
	cout << "Name: Giant otter" << endl;
	cout << "Habitat: The Amazon River" << endl;
	cout << "Count: 5000" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function outputs information about Atlantic bluefin tuna
void AtlanticBFtuna() {
	cout << "Name: Atlantic bluefin tuna" << endl;
	cout << "Habitat: The Atlantic Ocean" << endl;
	cout << "Count: 1600000" << endl;
	cout << endl;
	system("pause");
	system("cls");
}



//This function lets you choose for which type of endagered species to read about
void Info3() {
	int choice;
	cout << "Choose Species" << endl;
	cout << "1) Vaquita Phocoena sinus" << endl;
	cout << "2) Mediterranean monk seal" << endl;
	cout << "3) Sea Otter" << endl;
	cout << "4) Giant otter" << endl;
	cout << "5) Atlantic bluefin tuna" << endl;
	cout << endl;

	cin >> choice;
	switch (choice) {
	case 1:
		Vaquita();
		break;
	case 2:
		MonkSeal();
		break;
	case 3:
		SeaOtter();
		break;
	case 4:
		GiantOtter();
		break;
	case 5:
		AtlanticBFtuna();
		break;

	default:
		cout << "Invalid choice! Try again. ";
		cin.clear();
		cin >> choice;

	}
}



//In this function you can add info about new endagered species
void addSpecies(EndageredSpecies species[]) {
	int riba;
	cout << "How many areas would you like to add: ";
	cin >> riba;
	for (int i = 0; i < riba; i++) {
		cout << "Enter name: ";
		cin >> species[i].name;
		cout << "Enter habitat: ";
		cin >> species[i].habitat;
		cout << "Enter count: ";
		cin >> species[i].count;

	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < riba; i++) {
		cout << "|| Name: " << species->name << " ||" << endl;
		cout << "|| Habitat " << species->habitat << " ||" << endl;
		cout << "|| Count " << species->count << " ||" << endl;
		cout << "|| You have successfully added: " << species[i].name << " ||" << endl;;
		system("pause");
		system("cls");
	}
}



//This the main menu
void menu3() {
	int choice;
	EndageredSpecies species[3];
	do {
		cout << "---------------------------------" << endl;
		cout << "===========AQUA NATURE===========" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "||           MAIN MENU         ||" << endl;
		cout << "||1)      Protected species    ||" << endl;
		cout << "||2)      Endagered species    ||" << endl;
		cout << "||3)       Exit the menu       ||" << endl;
		cout << endl;
		cout << "---------------------------------" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			Info3();
			break;
		case 2:
			addSpecies(species);

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