/*
* @file main.cpp
*
* @author © Cocîrlã Cristian-Gabriel
*
* @creation date 08/12/2018
*/

#include <iostream>
#include "CRezervatie.h"

/// de adaugat unitati de masura, sa se inteleaga la printare mai bine.

int main()
{

	CRezervatie rezervatie;

	string nume;
	string data_aducerii;
	float greutate = 0;
	string hrana_preferata;
	float cantitate_zilnica = 0;

	int nr_pui = 0; // caprioara
	string hibernare; // urs
	float temp_minima = 0; // leu
	string tara_provenienta; // leu
	float temp_maxima = 0; // vulpe
	int tempo = 0; // vulpe
	bool tip = false; // vulpe ; 0 - indigena , 1 - polara



	int meniu;
	while (true)
	{
		system("CLS");
		cout << "1 - Adaugati o caprioara. " << endl;
		cout << "2 - Adaugati un urs. " << endl;
		cout << "3 - Adaugati un leu. " << endl;
		cout << "4 - Adaugati o vulpe. " << endl;
		cout << "5 - Afisare animale. " << endl;
		cout << "6 - Exit. " << endl;
		cin >> meniu;
		switch (meniu)
		{
			case 1:
			{
				cout << endl << "Numele: ";
				cin >> nume;
				cout << endl << "Data aducerii: ";
				cin >> data_aducerii;
				cout << endl << "Greutate: ";
				cin >> greutate;
				cout << endl << "Hrana preferata: ";
				cin >> hrana_preferata;
				cout << endl << "Cantitatea zilnica de hrana: ";
				cin >> cantitate_zilnica;
				cout << endl << "Cati pui are?: ";
				cin >> nr_pui;

				CCaprioara *tempCAPRIOARA = nullptr;
				tempCAPRIOARA = new CCaprioara(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica, nr_pui);
				rezervatie.Add(tempCAPRIOARA); // new si delete in acelasi fisier de preferat
				break;
			}
			case 2:
			{
				cout << endl << "Numele: ";
				cin >> nume;
				cout << endl << "Data aducerii: ";
				cin >> data_aducerii;
				cout << endl << "Greutate: ";
				cin >> greutate;
				cout << endl << "Hrana preferata: ";
				cin >> hrana_preferata;
				cout << endl << "Cantitatea zilnica de hrana: ";
				cin >> cantitate_zilnica;

				cout << endl << "Perioada de hibernare: ";
				cin >> hibernare;

				CUrs *tempURS = nullptr;
				tempURS = new CUrs(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica, hibernare);
				rezervatie.Add(tempURS);

				break;
			}
			case 3:
			{
				cout << endl << "Numele: ";
				cin >> nume;
				cout << endl << "Data aducerii: ";
				cin >> data_aducerii;
				cout << endl << "Greutate: ";
				cin >> greutate;
				cout << endl << "Hrana preferata: ";
				cin >> hrana_preferata;
				cout << endl << "Cantitatea zilnica de hrana: ";
				cin >> cantitate_zilnica;

				cout << endl << "Temperatura minima de supravietuire: ";
				cin >> temp_minima;
				cout << endl << "Tara de provenienta: ";
				cin >> tara_provenienta;

				CLeu *tempLEU = nullptr;
				tempLEU = new CLeu(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica, temp_minima, tara_provenienta);
				rezervatie.Add(tempLEU);
				break;
			}
			case 4:
			{
				cout << endl << "Numele: ";
				cin >> nume;
				cout << endl << "Data aducerii: ";
				cin >> data_aducerii;
				cout << endl << "Greutate: ";
				cin >> greutate;
				cout << endl << "Hrana preferata: ";
				cin >> hrana_preferata;
				cout << endl << "Cantitatea zilnica de hrana: ";
				cin >> cantitate_zilnica;

				cout << endl << "Temperatura maxima de supravietuire: ";
				cin >> temp_maxima;
				cout << endl << "Este indigena sau polara? (1 - indigena / 2 - polara)";
				cin >> tempo;
				if (tempo == 2)
				{
					tip = true;
				}

				CVulpe *tempVULPE = nullptr;
				tempVULPE = new CVulpe(nume, data_aducerii, greutate, hrana_preferata, cantitate_zilnica, temp_maxima, tip);
				rezervatie.Add(tempVULPE);
				break;
			}
			case 5:
			{
				cout << rezervatie;
				system("Pause");
				break;
			}
			case 6:
			{
				exit(1);
				break;
			}

		}
	}

	system("Pause");
	return 0;
}