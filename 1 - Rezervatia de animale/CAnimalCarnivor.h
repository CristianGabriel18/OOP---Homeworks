#pragma once
#include "CAnimal.h"
class CAnimalCarnivor :
	public CAnimal
{
public:
	CAnimalCarnivor();
	CAnimalCarnivor(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica);
	CAnimalCarnivor(const CAnimalCarnivor &);
	~CAnimalCarnivor();
};

