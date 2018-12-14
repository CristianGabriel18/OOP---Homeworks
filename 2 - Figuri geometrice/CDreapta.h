#pragma once
#include "CShape.h"
#include "CPunct.h"

class CDreapta :
	public CShape
{
public:
	CDreapta();
	CDreapta(float x1, float y1, float x2, float y2);
	~CDreapta();

	void printShapeName() override { cout << "Dreapta." << endl; }
	void afisare_particularitati() override { cout << "Cele 2 puncte sunt de coordonate: " << a.m_x << " si " << a.m_y << ", respectiv: " << b.m_x << " si " << b.m_y << endl; }

private:
	CPunct a;
	CPunct b;
};

