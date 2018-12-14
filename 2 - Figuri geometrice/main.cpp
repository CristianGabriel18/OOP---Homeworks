/*
* @file main.cpp
*
* @author © Cocîrlã Cristian-Gabriel
*
* @creation date 09/12/2018
*/


#include "CPunct.h"
#include "CDreapta.h"
#include "CPatrat.h"
#include "CCerc.h"
#include "ListOfShapes.h"

int main()
{

	int x[1], y[1]; 
	int TempX = 0, TempY = 0;
	vector<int> ValuesOfXs;
	vector<int> ValuesOfYs;

	ListOfShapes list;


	bool status_meniu = true;
	int meniu;
	while (status_meniu)
	{
		system("CLS");

		cout << "1 - Dreapta" << endl;
		cout << "2 - Patrat" << endl;
		cout << "3 - Cerc" << endl;
		cout << "4 - Afisare figuri" << endl;
		cout << "5 - Iesire" << endl;

		cin >> meniu;

		switch (meniu)
		{
		case 1:	
		{
			for (int i = 0; i <= 1; i++)
			{
				cout << "Introduceti coordonatele punctului " << i << ": x & y " << endl;
				cin >> x[i];
				cin >> y[i];
			}
			CDreapta *tempDREAPTA = new CDreapta(x[0], y[0], x[1], y[1]);
			list.Add(tempDREAPTA);
			break;
		}
		case 2:
		{
			for (int i = 1; i <= 4; i++)
			{
				cout << "Introduceti coordonatele punctului " << i << ": x & y " << endl;
				cin >> TempX;
				cin >> TempY;

				ValuesOfXs.push_back(TempX);
				ValuesOfYs.push_back(TempY);
			}

			CPatrat *tempPATRAT = new CPatrat(ValuesOfXs, ValuesOfYs);
			tempPATRAT->Perimeter();
			tempPATRAT->Area();
			list.Add(tempPATRAT);

			ValuesOfXs.clear();
			ValuesOfYs.clear();
			break;
		}
		case 3:
		{
			cout << "Introduceti coordonatele centrului cercului: " << endl;
			cin >> TempX;
			cin >> TempY;

			ValuesOfXs.push_back(TempX);
			ValuesOfYs.push_back(TempY);

			cout << "Introduceti coordonatele unui punct de pe cert: " << endl;
			cin >> TempX;
			cin >> TempY;

			ValuesOfXs.push_back(TempX);
			ValuesOfYs.push_back(TempY);

			CCerc *tempCERC = new CCerc(ValuesOfXs, ValuesOfYs);
			tempCERC->Perimeter();
			tempCERC->Area();
			list.Add(tempCERC);

			ValuesOfXs.clear();
			ValuesOfYs.clear();
			break;
		}
		case 4:
			cout << list;
			system("Pause");
			break;
		case 5:
			exit(1);
			break;
		}

	}
	
	system("Pause");
	return 0;
}


