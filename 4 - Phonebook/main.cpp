/*
* @file main.cpp
*
* @author © Cocîrlã Cristian-Gabriel
*
* @creation date 13/12/2018
*/
#include "CSubscriber.h"
#include "CPhonebook.h"

int main()
{

	CPhonebook phonebook;

	string name;
	string country;
	string city;
	string street;
	string phone;

	while (true)
	{
		cout << endl;
		cout << "1 - Add a subscriber. " << endl;
		cout << "2 - Search an subscriber's phone by his name. " << endl;
		cout << "3 - Exit." << endl << endl;

		int meniu;
		cin >> meniu;
		switch (meniu)
		{
			case 1:
			{	
				cout << "New subscriber: " << endl;
				cout << "Name: ";
				cin >> name;
				cout << "Country: ";
				cin >> country;
				cout << "City: ";
				cin >> city;
				cout << "Street: ";
				cin >> street;
				cout << "Phone number: ";
				cin >> phone;

				CSubscriber *tempSUBSCRIBER = new CSubscriber(name, country, city, street, phone);
				phonebook.Add(tempSUBSCRIBER);
				break;
			}
			case 2:
			{
				cout << "Name: ";
				cin >> name;

				phonebook.DisplayResult(name);

				break;
			}
			case 3:
			{
				exit(1);
				break;
			}

		}
	}

	return 0;
}