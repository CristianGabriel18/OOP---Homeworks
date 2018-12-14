#pragma once
#include "CAnimalCarnivor.h"
class CUrs :
	public CAnimalCarnivor
{
public:
	CUrs();
	CUrs(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica, const string& hibernare);
	CUrs(const CUrs &);
	~CUrs();

	void afisare_particularitati() override
	{
		cout << "Perioada de hibernare: " << m_hibernare << endl;
	}


private:
	string m_hibernare;
};

