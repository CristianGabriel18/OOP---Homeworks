#pragma once
#include "CAnimalCarnivor.h"
class CLeu :
	public CAnimalCarnivor
{
public:
	CLeu();
	CLeu(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica, float m_temp_minima, const string& tara_provenienta);
	CLeu(const CLeu &);
	~CLeu();

	void afisare_particularitati() override
	{
		cout << "Temperatura minima: " << m_temp_minima << endl;
		cout << "Tara de provenienta: " << m_tara_provenienta << endl;
	}

private:
	float m_temp_minima;
	string m_tara_provenienta;
};

