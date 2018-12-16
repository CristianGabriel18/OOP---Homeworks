#include "CPhonebook.h"



CPhonebook::CPhonebook()
{
}


CPhonebook::~CPhonebook()
{
}

void CPhonebook::Add(CSubscriber* sub)
{
	subscribers.push_back(sub);
}

void CPhonebook::DisplayResult(string name)
{
	for (auto i = subscribers.begin(); i != subscribers.end(); i++)//(auto i : subscribers)
	{
		if (name == (*i)->m_name)
		{
			cout << " -------------------------------- " << endl;
			cout << "Name: " << (*i)->m_name << endl;
			cout << "Phone number: " << (*i)->m_PhoneNumber << endl;
			cout << " -------------------------------- " << endl;
		}
	}
}