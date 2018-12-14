#include "CAnimal.h"
#include "CCaprioara.h"


CAnimal::CAnimal()
{
	m_nume = "";
	m_data_aducerii = "";
	m_greutate = 0;
	m_hrana_preferata = "";
	m_cantitate_zilnica = 0;
}

CAnimal::CAnimal(const string & nume, const string & data_aducerii, float greutate, const string & hrana_preferata, float cantitate_zilnica)
{
	m_nume = nume;
	m_data_aducerii = data_aducerii;
	m_greutate = greutate;
	m_hrana_preferata = hrana_preferata;
	m_cantitate_zilnica = cantitate_zilnica;
}

CAnimal::CAnimal(const CAnimal &animal)
{
	m_nume = animal.m_nume;
	m_data_aducerii = animal.m_data_aducerii;
	m_greutate = animal.m_greutate;
	m_hrana_preferata = animal.m_hrana_preferata;
	m_cantitate_zilnica = animal.m_cantitate_zilnica;
}



CAnimal::~CAnimal()
{
}

