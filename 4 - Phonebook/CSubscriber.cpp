#include "CSubscriber.h"



CSubscriber::CSubscriber()
{
}

CSubscriber::CSubscriber(const string & name, const string & country, const string & city, const string & street, const string & phone)
{

	m_name = name;
	address.m_country = country;
	address.m_city = city;
	address.m_street = street;
	m_PhoneNumber = phone;
}


CSubscriber::~CSubscriber()
{
}
