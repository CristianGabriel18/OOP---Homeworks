#pragma once
#include "CAnimalIerbivor.h"
class CCaprioara :
	public CAnimalIerbivor
{
public:
	CCaprioara();
	CCaprioara(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica, float numar_pui);
	CCaprioara(const CCaprioara &);
	~CCaprioara();


	void afisare_particularitati() override
	{
		cout << "Numar pui: " << m_numar_pui << endl;
	}

private:
	int m_numar_pui;
};
