#ifndef CMA_H
#define CMA_H

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

/*Structure DATE*/
struct Date {
	int day;
	int month;
	int year;
};

/*Structure ADDRESS*/
struct Address {
	int streetNumber;
	string streetName;
	string city;
	string province;
	string postalCode;
	string country;
};

/*Structure CONTACT*/
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

/*Functions prototypes*/
void sort_contacts(vector<Contact> *v, int choice);
void search_vector(vector<Contact> &v, string value);
void display_vector(vector<Contact> &v);
void remove_contact(vector<Contact> &v, string value);
int menu_sort();
int menu_search();
int main_menu();
void add_contact(vector<Contact> &aContact, int &vecSize);
ostream &operator << (ostream & out_stream, Contact &v);
istream &operator >> (istream & in_stream, Contact &v);

#endif