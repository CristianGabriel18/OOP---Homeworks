#pragma once
#include "CShape.h"
#include "CPunct.h"

class CPatrat :
	public CShape
{
public:
	CPatrat();
	CPatrat(vector<int> Xs, vector<int> Ys);
	~CPatrat();
	
	void printShapeName() override { cout << "Patrat." << endl; }
	void afisare_particularitati() override { cout << "Perimetru: " << m_perimeter << endl; cout << "Arie: " << m_area << endl; }


	double Perimeter() override;
	double Area() override;
private:

	CPunct coord[4];
	double m_perimeter;
	double m_area;
	// de facut 2 variabile perimetru si arie, in care sa fie salvate valorile din functiile perimeter si area
	// valorile astea sa fie afisate dupa ce salvez figurile intr-o lista si incerc supraincarcarea pulii??
};

