#include "CVulpe.h"



CVulpe::CVulpe()
{
	m_temp_maxima = 0;
	m_tip = 0;
}

CVulpe::CVulpe(const string & nume, const string & data_aducerii, float greutate, const string & hrana_preferata, float cantitate_zilnica, float temp_maxima, const bool tip) : CAnimalIerbivor(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica)
{
	m_temp_maxima = temp_maxima;
	m_tip = tip;
}

CVulpe::CVulpe(const CVulpe& vulpe) : CAnimalIerbivor(vulpe)
{
	m_temp_maxima = vulpe.m_temp_maxima;
	m_tip = vulpe.m_tip;
}


CVulpe::~CVulpe()
{
}
