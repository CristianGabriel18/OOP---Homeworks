#include "CAnimalIerbivor.h"

CAnimalIerbivor::CAnimalIerbivor()
{
}

CAnimalIerbivor::CAnimalIerbivor(const string& nume, const string& data_aducerii, float greutate, const string& hrana_preferata, float cantitate_zilnica): CAnimal(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica)
{
}

CAnimalIerbivor::CAnimalIerbivor(const CAnimalIerbivor& animalierbivor) : CAnimal(animalierbivor)
{
}

CAnimalIerbivor::~CAnimalIerbivor()
{
}
