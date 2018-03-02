#include "Header.h"

/*Overloading the << (COUT) operator*/
ostream &operator << (ostream & out_stream, Contact &v) {
	out_stream << "Contact ID: " << v.contactID << endl <<
		"First Name: " << v.fn << endl
		<< "Last Name: " << v.ln << endl <<
		"Fax: " << v.fax << endl <<
		"Phone: " << v.phone << endl <<
		"Street Number: " << v.add.streetNumber << endl <<
		"Street Name: " << v.add.streetName << endl <<
		"City: " << v.add.city << endl <<
		"Postal Code: " << v.add.postalCode << endl <<
		"Country: " << v.add.country << endl <<
		"Province: " << v.add.province << endl <<
		"Company: " << v.company << endl <<
		"Meeting Date: " << v.date.day << "/" << v.date.month << "/" << v.date.year << "\n\n";
	return out_stream;
}

/*Overloading the >> (CIN) operator*/
istream &operator >> (istream & in_stream, Contact &v) {
	cout << "Contact ID: ";
	in_stream >> v.contactID;
	in_stream.ignore();
	cout << "First Name: ";
	getline(in_stream, v.fn);
	cout << "Last Name: ";
	getline(in_stream, v.ln);
	cout << "Fax: ";
	getline(in_stream, v.fax);
	cout << "Phone: ";
	getline(in_stream, v.phone);
	cout << "Street Number: ";
	cin >> v.add.streetNumber;
	cout << "Street Name: ";
	in_stream.ignore();
	getline(in_stream, v.add.streetName);
	cout << "City: ";
	getline(in_stream, v.add.city);
	cout << "Postal Code: ";
	getline(in_stream, v.add.postalCode);
	cout << "Country: ";
	getline(in_stream, v.add.country);
	cout << "Province: ";
	getline(in_stream, v.add.province);
	cout << "Company: ";
	getline(in_stream, v.company);
	cout << "Meeting Day: ";
	in_stream >> v.date.day;
	cout << "Meeting Month: ";
	in_stream >> v.date.month;
	cout << "Meeting Year: ";
	in_stream >> v.date.year;
	return in_stream;
}

/*Function to add a contact to the vector*/
void add_contact(vector<Contact> &aContact, int &vecSize) {
	aContact.push_back(Contact());
	cin >> aContact[vecSize];
	vecSize++;
}

/*Main menu display*/
int main_menu() {
	int menu = 0;
	do {
		system("cls");
		cout << "\t\t\t\tContact Manager Application - Main Menu";
		cout << "\n\n\n1 - Create a contact";
		cout << "\n2 - Display all the contacts";
		cout << "\n3 - Search for a contact";
		cout << "\n4 - Sort the contacts";
		cout << "\n5 - Exit application";
		cout << "\n\nEnter your choice: ";
		cin >> menu;
	} while (menu > 5 || menu < 1);
	return menu;
}

/*Search menu display*/
int menu_search() {
	int menu = 0;
	do {
		system("cls");
		cout << "\t\t\nSearch for:";
		cout << "\n1 - Contact ID";
		cout << "\n2 - First name";
		cout << "\n3 - Last name";
		cout << "\n4 - Cancel and return to main menu";
		cout << "\n\nEnter your choice: ";
		cin >> menu;
	} while (menu > 4 || menu < 1);
	return menu;
}

/*Sort menu display*/
int menu_sort() {
	int menu = 0;
	do {
		system("cls");
		cout << "\t\t\nSearch for:";
		cout << "\n1 - Contact ID";
		cout << "\n2 - First name";
		cout << "\n3 - Last name";
		cout << "\n4 - Cancel and return to main menu";
		cout << "\n\nEnter your choice: ";
		cin >> menu;
	} while (menu > 4 || menu < 1);
	return menu;
}

/*Function to display the vector array*/
void display_vector(vector<Contact> &v)
{
	system("cls");
	cout << "Displaying all the contacts: \n";
	for (int count = 0; count < v.size(); count++)
	{
		cout << v[count] << endl;
	}
	cout << "Press any key to go back to the main menu.";
}

/*Function to search through a vector*/
void search_vector(vector<Contact> &v, string value)
{
	system("cls");
	bool found = false;
	for (int count = 0; count < v.size(); count++)
	{
		if (v[count].contactID == value || v[count].fn == value || v[count].ln == value) {
			cout << "\nYour search matches the following results:\n";
			cout << v[count];
			found = true;
		}
	}
	if (!found) {
		cout << "\nYour search didn't return any result.";
	}
}

/*Function to sort the contacts array*/
void sort_contacts(vector<Contact> *v, int choice) {
	if (choice == 1) {
		sort(v->begin(), v->end(), [](const Contact &lhs, const Contact &rhs)
		{
			return lhs.contactID < rhs.contactID;
		});
	}
	else if (choice == 2) {
		sort(v->begin(), v->end(), [](const Contact &lhs, const Contact &rhs)
		{
			return lhs.fn < rhs.fn;
		});
	}
	else if (choice == 3) {
		sort(v->begin(), v->end(), [](const Contact &lhs, const Contact &rhs)
		{
			return lhs.ln < rhs.ln;
		});
	}
}