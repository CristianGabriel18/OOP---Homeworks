#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <list>
using namespace std;

class CShape
{
public:
	CShape(){}
	~CShape(){}

	virtual void printShapeName() = 0;
	virtual void afisare_particularitati() = 0;

	virtual double Perimeter() { return -1; }
	virtual double Area() { return -1; }




};
