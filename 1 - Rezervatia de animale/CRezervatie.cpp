#include "CRezervatie.h"

CRezervatie::~CRezervatie()
{
	for (auto i = animale.begin(); i != animale.end(); i++)
	{
		delete *i;
	}
	animale.clear();
}

void CRezervatie::Add(CAnimal * animal)
{
	animale.push_back(animal);
}

ostream & operator<<(ostream & str, CRezervatie const & rezervatie)
{
	{
		for (auto i = rezervatie.animale.begin(); i != rezervatie.animale.end(); i++) // auto i : rezervatie.animale ? // daca folosesc cbegin nu imi modifica membrii
		{
			cout << "-----------------------------------------------" << endl;
			(*i)->afisare_generalitati();
			cout << "-----------------------------------------------" << endl;
		}
		return str;
	}
}
