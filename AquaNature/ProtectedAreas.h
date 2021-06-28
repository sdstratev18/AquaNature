#pragma once
#include <iostream>
#include <string>
using namespace std;
struct ProtectedWaterAreas {
	string name;
	string location;
	int date{};
	string species;
	
};




void PelicansProtectedArea() {
	cout << "Name: Pelicans Protected Area" << endl;
	cout << "Location: Silistra" << endl;
	cout << "Opening Date: 1983" << endl;
	cout << "Species: Pelicans" << endl;
	cout << endl;
	system("pause");
	system("cls");
}


void Kolokita() {
	cout << "Name: Kolokita Protected Area" << endl;
	cout << "Location: Sozopol" << endl;
	cout << "Opening Date: 1970" << endl;
	cout << "Species: There is a variety of species" << endl;
	cout << endl;
	system("pause");
	system("cls");
}

void Poda() {
	cout << "Name: Poda Protected Area" << endl;
	cout << "Location: Burgas" << endl;
	cout << "Opening Date: 1989" << endl;
	cout << "Species: 6 types of fishes, 16 types of Amphibians and reptiles, 273 types of birds and etc." << endl;
	cout << endl;
	system("pause");
	system("cls");
}

void DurankulakLake() {
	cout << "Name: Durankulak Lake Protected Area" << endl;
	cout << "Location: Dobrich" << endl;
	cout << "Opening Date: 1974" << endl;
	cout << "Species: There are 12 species of mammals, 23 species of fish and etc." << endl;
	cout << endl;
	system("pause");
	system("cls");
}


void ShablaLake() {
	cout << "Name: Shabla Lake Protected Area" << endl;
	cout << "Location: Shabla" << endl;
	cout << "Opening Date: 1979" << endl;
	cout << "Species: There are 23 species of fish in Shabla Lake, seven of which are included in the Red Book of Bulgaria." << endl;
	cout << endl;
	system("pause");
	system("cls");
}





void Info() {
	int choice;
	cout << "Choose Protected Area" << endl;
	cout << "1) Pelicans" << endl;
	cout << "2) Kolokita" << endl;
	cout << "3) Poda" << endl;
	cout << "4) Durankulak Lake" << endl;
	cout << "5) Shabla Lake" << endl;
	cout << endl;

	cin >> choice;
	switch (choice) {
	case 1:
		PelicansProtectedArea();
		break;
	case 2:
		Kolokita();
		break;
	case 3:
		Poda();
		break;
	case 4:
		DurankulakLake();
		break;
	case 5:
		ShablaLake();
		break;

	default:
		cout << "Invalid choice! Try again. ";
		cin.clear();
		cin >> choice;

	}
}

void creatProtectedArea(ProtectedWaterAreas area[]) {
	int rezervat;
	cout << "How many areas would you like to add: ";
	cin >> rezervat;
	for (int i = 0; i < rezervat; i++) {
		cout << "Enter name: ";
		cin >> area[i].name;
		cout << "Enter location: ";
		cin >> area[i].location;
		cout << "Enter opeing date: ";
		cin >> area[i].date;
		cout << "Enter the types of species tha inhabit the protected area: ";
		cin >> area[i].species;
	}

	cout << endl;
	cout << endl;

	for (int i = 0; i < rezervat; i++) {
		cout << "|| Name: " << area->name <<" ||"<< endl;
		cout << "|| Location " << area->location << " ||"<< endl;
		cout << "|| Opening Date " << area->date << " ||"<<endl;
		cout << "|| Inhabiting species " << area->species << " ||"<<endl;
		cout << "|| You have successfully added: " << area[i].name << " ||" << endl;;
		system("pause");
		system("cls");
	}
}

void menu() {
	int choice;
	ProtectedWaterAreas areas[4];
	do {
		cout << "---------------------------------" << endl;
		cout << "===========AQUA NATURE===========" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "||           MAIN MENU         ||" << endl;
		cout << "||1)      Protected areas      ||" << endl;
		cout << "||2)    Add protected areas    ||" << endl;
		cout << "||3)      Exit the program     ||" << endl;
		cout << endl;
		cout << "---------------------------------" << endl;
		cout << "---------------------------------" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			Info();
			break;
		case 2:
			creatProtectedArea(areas);
			
			break;
		case 3:
			cout << "You exited the program successfully!";
			break;
		default:
			cout << "Wrong choice. Try again! ";
			cin >> choice;
		}
	} 		while (choice != 3);
}