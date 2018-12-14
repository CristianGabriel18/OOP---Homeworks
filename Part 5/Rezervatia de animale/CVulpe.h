#pragma once
#include "CAnimalIerbivor.h"
class CVulpe :
	public CAnimalIerbivor
{
public:
	CVulpe();
	CVulpe(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica, float temp_maxima,const bool tip);
	CVulpe(const CVulpe &);
	~CVulpe();

	void afisare_particularitati() override
	{
		cout << "Temperatura maxima: " << m_temp_maxima << endl;
		if (m_tip == true) { cout << "Tipul de vulpe: indigena" << endl; }
		else { cout << "Tipul de vulpe: polara. " << endl; }		
	}

private:
	float m_temp_maxima;
	bool m_tip;
};

