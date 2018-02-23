#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

struct Address {
	int streetNumber;
	string streetName;
	string city;
	string province;
	string postalCode;
	string country;
};

struct Contact {
	string contactID;
	string fn;
	string ln;
	string company;
	string phone;
	string fax;
	Date date;
	Address add;
};

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

void add_contact(vector<Contact> &aContact,int &vecSize) {
	aContact.push_back(Contact());
	cin >> aContact[vecSize];
	vecSize++;
}

int main_menu() {
	int menu;
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

int menu_contact() {
	int menu;
	do {
		system("cls");
		system("cls");
		cout << "\t\t\nSearch for:";
		cout << "\n1 - Contact number";
		cout << "\n2 - First name or last name";
		cout << "\n3 - Cancel and return to main menu";
		cout << "\n\nEnter your choice: ";
	} while (menu > 3 || menu < 1);
	return menu;
}

int menu_sort() {
	int menu;
	do {
		system("cls");
		cout << "\t\t\nSearch for:";
		cout << "\n1 - Contact number";
		cout << "\n2 - First name or last name";
		cout << "\n3 - Cancel and return to main menu";
		cout << "\n\nEnter your choice: ";
	} while (menu > 3 || menu < 1);
	return menu;
}

void display_vector(vector<Contact> &v)
{
	system("cls");
	cout << "Displaying all the contacts: \n";
	for (int count = 0; count < v.size(); count++)
	{
		cout << v[count] << endl;
	}
}

int main() {
	int vecSize = 0;

	main_menu();

	vector<Contact> aContact;
	cout << endl;

	add_contact(aContact, vecSize);
	add_contact(aContact, vecSize);
	add_contact(aContact, vecSize);

	display_vector(aContact);
	//cout << aContact[0];
	cout << "\n\nPress any key to exit.";
	system("pause>>null");
	return 0;
}