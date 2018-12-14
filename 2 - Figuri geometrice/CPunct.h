#pragma once
#include "CShape.h"

class CPunct
{
	friend class CDreapta;
	friend class CPatrat;
	friend class CCerc;
public:
	CPunct();
	CPunct(int xi, int yi);
	~CPunct();


protected:
	int m_x, m_y;
};

