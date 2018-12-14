#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string> 
#include <algorithm>
using namespace std;

#include "CSubscriber.h"
//class CSubscriber;//declaratie forward? cum as putea sa am acces in functia display result la membrii clasei CSubscriber
                                      //  daca imi da eroare si aparent merge doar cu #include "CSubscriber.h" ?

class CPhonebook
{
public:

	CPhonebook();
	~CPhonebook();

	void Add(CSubscriber* sub);
	void DisplayResult(string name);

private:
	list<CSubscriber*> subscribers;
};

