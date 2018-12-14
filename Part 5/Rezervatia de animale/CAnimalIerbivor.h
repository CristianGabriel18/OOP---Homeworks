#pragma once
#include "CAnimal.h"
class CAnimalIerbivor :
	public CAnimal
{
public:
	CAnimalIerbivor();
	CAnimalIerbivor(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica);
	CAnimalIerbivor(const CAnimalIerbivor &);
	~CAnimalIerbivor();
};

