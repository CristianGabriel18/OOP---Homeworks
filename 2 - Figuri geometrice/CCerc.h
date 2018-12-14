#pragma once
#include "CShape.h"
#include "CPunct.h"
const double pi = 3.14286;


class CCerc :
	public CShape
{
public:
	CCerc();
	CCerc(vector<int> Xs, vector<int> Ys);
	~CCerc();

	void printShapeName() override { cout << "Cerc." << endl; }
	void afisare_particularitati() override { cout << "Raza: " << m_raza << endl; cout << "Perimetrul: " << m_perimeter << endl; cout << "Aria: " << m_area << endl; }

	double Perimeter() override;
	double Area() override;	
private:
	CPunct coord[2];
	double m_raza;
	double m_perimeter;
	double m_area;
};

