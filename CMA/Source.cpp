/*
Author: Walter Henrike Ferreira Macieira
Version: 1.0
Date: 01/mars/2018
Purpose: simple contact manager application using pointers, vectors, overloading functions.
*/
#include "Header.h"

using namespace std;
/*
Main application

*/
int main() {
	
	int vecSize = 0;
	vector<Contact> aContact;

	int choice = 0;
	string search;
	string cid;

	do {
		/*Switch case for the main menu*/
		switch (main_menu()) {
			/*Case 1, enter a new contact*/
		case 1:
			system("cls");
			cout << "1 - Entering a new contact\n\n";
			add_contact(aContact, vecSize);
			cout << "\nPress any key to go back to the main menu";
			system("pause>>null");
			break;
		case 2:
			/*Case 2, displaying all the contacts*/
			display_vector(aContact);
			system("Pause>>null");
			break;
		case 3: {
			/*Case 3, searching through the contact array*/
			switch (menu_search()) {
			case 1: {
				/*Search by contact id*/
				cin.ignore();
				cout << "Enter the 'Contact ID' to search: ";
				getline(cin, search);
				search_vector(aContact, search);
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 2: {
				/*Search by first name*/
				cin.ignore();
				cout << "Enter the 'First Name' to search: ";
				getline(cin, search);
				search_vector(aContact, search);
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 3: {
				/*Search by last name*/
				cin.ignore();
				cout << "Enter the 'Last Name' to search: ";
				getline(cin, search);
				search_vector(aContact, search);
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 4:
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			default:
				break;
			}
			break;
		}
		case 4: {
			/*Sorting the contact array*/
			switch (menu_sort()) {
			case 1: {
				/*Sort contacts by contact id*/
				sort_contacts(&aContact,1);
				cout << "\nContacts sorted by Contact ID";
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 2: {
				/*Sort contacts by contact first name*/
				sort_contacts(&aContact, 2);
				cout << "\nContacts sorted by First Name";
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 3: {
				/*Sort contacts by contact last name*/
				sort_contacts(&aContact, 3);
				cout << "\nContacts sorted by Last Name";
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 4:
				cout << "Press any key to go back to the main menu";
				system("Pause>>null");
				break;
			default:
				break;
			}
			break;
		}
		break;

		case 5:
			system("cls");
			cout << "Enter the 'Contact ID' or 'Contact First Name' you want to delete:";
			cin >> cid;
			remove_contact(aContact, cid);
			cout << "\nPress any key to go back to the main menu";
			system("Pause>>null");
			break;
		case 6:
			/*Closes the program*/
			choice = 6;
			break;
		default: 
			break;
		}
	} while (choice != 6);

	return 0;
}