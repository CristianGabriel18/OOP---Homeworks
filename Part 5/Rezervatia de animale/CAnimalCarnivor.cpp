#include "CAnimalCarnivor.h"



CAnimalCarnivor::CAnimalCarnivor()
{
}

CAnimalCarnivor::CAnimalCarnivor(const string & nume, const string & data_aducerii, float greutate, const string & hrana_preferata, float cantitate_zilnica) : CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica)
{
}

CAnimalCarnivor::CAnimalCarnivor(const CAnimalCarnivor& animalcarnivor) : CAnimal(animalcarnivor)
{
}


CAnimalCarnivor::~CAnimalCarnivor()
{
}
