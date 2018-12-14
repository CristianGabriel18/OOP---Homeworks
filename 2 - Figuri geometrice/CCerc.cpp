#include "CCerc.h"



CCerc::CCerc() : 
	m_raza(0),
	m_area(0),
	m_perimeter(0)
{
}

CCerc::CCerc(vector<int> ValuesOfXs, vector<int> ValuesOfYs)
{
	for (int i = 0; i <= 1; i++)
	{
		coord[i].m_x = ValuesOfXs.at(i);
		coord[i].m_y = ValuesOfYs.at(i);
	}
}

CCerc::~CCerc()
{
}

double CCerc::Perimeter()
{
	m_raza = sqrt(pow((coord[0].m_x - coord[1].m_x), 2) + pow((coord[0].m_y - coord[1].m_y), 2));
	m_perimeter = ( 2 * m_raza * pi);
	return m_perimeter;
}

double CCerc::Area()
{
	m_raza = sqrt(pow((coord[0].m_x - coord[1].m_x), 2) + pow((coord[0].m_y - coord[1].m_y), 2));
	m_area = ( pi * pow(m_raza, 2) );
	return m_area;
}