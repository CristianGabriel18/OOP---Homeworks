#include "CLeu.h"



CLeu::CLeu()
{
	m_temp_minima = 0;
	m_tara_provenienta = "";
}

CLeu::CLeu(const string & nume, const string & data_aducerii, float greutate, const string & hrana_preferata, float cantitate_zilnica, float temp_minima, const string & tara_provenienta) : CAnimalCarnivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica)
{
	m_temp_minima = temp_minima;
	m_tara_provenienta = tara_provenienta;
}

CLeu::CLeu(const CLeu& leu) : CAnimalCarnivor(leu)
{
	m_temp_minima = leu.m_temp_minima;
	m_tara_provenienta = leu.m_tara_provenienta;
}


CLeu::~CLeu()
{
}
