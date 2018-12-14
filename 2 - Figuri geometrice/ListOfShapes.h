#pragma once
#include "CShape.h"


class ListOfShapes :
	public CShape
{
public:
	ListOfShapes() {}
	~ListOfShapes()
	{
		for (auto i = shapes.begin(); i != shapes.end(); i++)
		{
			delete *i;
		}
		shapes.clear();
	}

	friend ostream& operator<<(ostream& str, ListOfShapes const& shape)
	{
		for (auto i = shape.shapes.begin(); i != shape.shapes.end(); i++)
		{
			cout << "-----------------------------------" << endl;
			(*i)->printShapeName();
			(*i)->afisare_particularitati();
			cout << "-----------------------------------" << endl;

		}
		return str;
	}


	void Add(CShape* shape) { shapes.push_back(shape); }
	void printShapeName() override {}
	void afisare_particularitati() override {}
private:
	list<CShape*> shapes;
};