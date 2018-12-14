#include "CCaprioara.h"



CCaprioara::CCaprioara()
{
	m_numar_pui = 0;
}

CCaprioara::CCaprioara(const string & nume, const string & data_aducerii, float greutate, const string & hrana_preferata, float cantitate_zilnica, float numar_pui): CAnimalIerbivor(nume,data_aducerii,greutate,hrana_preferata,cantitate_zilnica)
{
	m_numar_pui = numar_pui;
}

CCaprioara::CCaprioara(const CCaprioara& caprioara) : CAnimalIerbivor(caprioara)
{
	m_numar_pui = caprioara.m_numar_pui;
}


CCaprioara::~CCaprioara()
{
}

