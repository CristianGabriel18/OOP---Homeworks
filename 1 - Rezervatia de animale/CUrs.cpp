#include "CUrs.h"



CUrs::CUrs()
{
	m_hibernare = "";
}

CUrs::CUrs(const string & nume, const string & data_aducerii, float greutate, const string & hrana_preferata, float cantitate_zilnica, const string & hibernare) : CAnimalCarnivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica)
{
	m_hibernare = hibernare;
}

CUrs::CUrs(const CUrs& urs) : CAnimalCarnivor(urs)
{
	m_hibernare = urs.m_hibernare;
}


CUrs::~CUrs()
{
}
