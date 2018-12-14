#include "CPatrat.h"



CPatrat::CPatrat(): m_perimeter(0) , m_area(0)
{
}

CPatrat::CPatrat(vector<int> ValuesOfXs, vector<int> ValuesOfYs)
{
	for (int i = 0; i <= 3; i++)
	{
		coord[i].m_x = ValuesOfXs.at(i);
		coord[i].m_y = ValuesOfYs.at(i);
	}
}


CPatrat::~CPatrat()
{
}

double CPatrat::Perimeter()
{
	m_perimeter = sqrt(pow( (coord[0].m_x - coord[1].m_x), 2) + pow( (coord[0].m_y - coord[1].m_y), 2) ) * 4;
	return m_perimeter;
}

double CPatrat::Area()
{
	double DistanceBetween2Points;
	DistanceBetween2Points = sqrt(pow( (coord[0].m_x - coord[1].m_x), 2) + pow( (coord[0].m_y - coord[1].m_y), 2) );
	m_area = pow(DistanceBetween2Points, 2);
	return m_area;
}