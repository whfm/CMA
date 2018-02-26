#include "Header.h"

using namespace std;

int main() {
	
	int vecSize = 0;
	vector<Contact> aContact;

	int choice = 0;
	string search;

	do {
		switch (main_menu()) {
		case 1:
			system("cls");
			cout << "1 - Entering a new contact\n\n";
			add_contact(aContact, vecSize);
			cout << "\nPress any key to go back to the main menu";
			system("pause>>null");
			break;
		case 2:
			display_vector(aContact);
			system("Pause>>null");
			break;
		case 3: {
			switch (menu_search()) {
			case 1: {
				cin.ignore();
				cout << "Enter the 'Contact ID' to search: ";
				getline(cin, search);
				search_vector(aContact, search);
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 2: {
				cin.ignore();
				cout << "Enter the 'First Name' to search: ";
				getline(cin, search);
				search_vector(aContact, search);
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 3: {
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
			switch (menu_sort()) {
			case 1: {
				sort_contacts(aContact,1);
				cout << "\nContacts sorted by Contact ID";
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 2: {
				sort_contacts(aContact, 2);
				cout << "\nContacts sorted by First Name";
				cout << "\nPress any key to go back to the main menu";
				system("Pause>>null");
				break;
			}
			case 3: {
				sort_contacts(aContact, 3);
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
			choice = 5;
			break;
		default: 
			break;
		}
	} while (choice != 5);

	return 0;
}