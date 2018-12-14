#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



class CSubscriber
{
	friend class CPhonebook;
public:

	CSubscriber();
	CSubscriber(const string& name, const string& country, const string& city, const string& street, const string& phone);
	~CSubscriber();
	
			class CAddress
			{
			public:
				CAddress() {}
				CAddress(const string& country, const string& city, const string& street) { m_country = country; m_city = city; m_street = street; }
				~CAddress() {}


			private:
				string m_country;
				string m_city;
				string m_street;
				friend class CSubscriber;
			};
	
	CAddress address;

private:
	string m_name;
	string m_PhoneNumber;
};

