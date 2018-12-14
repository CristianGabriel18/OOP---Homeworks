/*
* @file main.cpp
*
* @author © Cocîrlã Cristian-Gabriel
*
* @creation date 10/12/2018
*/


#include "CWord.h"
#include "CDictionary.h"

/// atunci cand cauta la case 3, sa afiseze..tre sa introducem cuvantul cuatat deja in lowercase pentru ca il modifica la introducerea in vector(case 1)


void ConvertToLower(string& s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}

}

int main()
{

	vector<string> allwords;

	CDictionary dictionary;
	while (true)
	{
		cout << endl;
		cout << "1 - Add word." << endl;
		cout << "2 - Add a synonym to an existing word." << endl;
		cout << "3 - Display words + their synonyms." << endl;
		cout << "4 - Exit." << endl << endl;

		int meniu;
		cin >> meniu;
		switch (meniu)
		{
			case 1:
			{
				string tempWord;
				system("CLS");
				cout << "Type the word: " << endl;
				cin >> tempWord;

				ConvertToLower(tempWord);
				allwords.push_back(tempWord);

				CWord *OBJtempWORD = new CWord(tempWord); 
				dictionary.Add(OBJtempWORD);


				break;
			}
			case 2:
			{
				string tempWord;
				system("CLS");
				cout << "Type the wanted word: " << endl;
				cin >> tempWord;

				bool found = false;
				for (int i = 0; i < allwords.size(); i++)
				{
					if (tempWord == allwords.at(i))
					{
						cout << "Word found. " << endl;
						system("Pause");


						cout << "Add a synonym for this word: ";
						cin >> tempWord;
						CWord::CSynonym *OBJtempSYNONYM = new CWord::CSynonym(tempWord, i);
						dictionary.Add(OBJtempSYNONYM);
						found = true;
					}

				}

				if (found == false)
				{
					cout << "Word not found. " << endl;
				}

				break;
			}
			case 3:
			{
				dictionary.SortLists();

				string tempWord;
				system("CLS");
				cout << "Type the wanted word: " << endl;
				cin >> tempWord;

				bool found = false;
				for (int i = 0; i < allwords.size(); i++)
				{
					if (tempWord == allwords.at(i))
					{
						cout << "Word found. " << endl;
						system("Pause");
						cout << " ------------------------------ " << endl;

						dictionary.PrintWord(i);
						dictionary.PrintSynonyms(i);

						found = true;
					}

				}

				if (found == false)
				{
					cout << "Word not found. " << endl;
				}


				break;
			}
			case 4:
			{
				exit(1);
				break;
			}

		}
	}

	return 0;
}