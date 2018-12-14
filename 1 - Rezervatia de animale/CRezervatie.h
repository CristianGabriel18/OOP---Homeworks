#pragma once
#include "CAnimal.h"
#include "CAnimalCarnivor.h"
#include "CAnimalIerbivor.h"
#include "CCaprioara.h"
#include "CUrs.h"
#include "CLeu.h"
#include "CVulpe.h"

class CRezervatie
{
public:

	CRezervatie() {};
	~CRezervatie();
	
	void Add(CAnimal* animal);


	friend ostream& operator<<(ostream& str, CRezervatie const& rezervatie);

private:
	list<CAnimal*> animale;
};

