#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;
class CAnimal
{
protected:

	

public:
	CAnimal();
	CAnimal(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica);
	CAnimal(const CAnimal &);
	~CAnimal();


	virtual void afisare_particularitati() {} 
	void afisare_generalitati()
	{
		cout << "Nume: " << m_nume << endl;
		cout << "Data aducerii: " << m_data_aducerii << endl;
		cout << "Greutate: " << m_greutate << endl;
		cout << "Hrana preferata: " << m_hrana_preferata << endl;
		cout << "Cantitatea zilnica: " << m_cantitate_zilnica << endl;
		afisare_particularitati(); // trecut aici sa fie doar o functie afisata in supraincarcarea << din rezervatie
	}

private:
	string m_nume;
	string m_data_aducerii;
	float m_greutate;
	string m_hrana_preferata;
	float m_cantitate_zilnica;
};

