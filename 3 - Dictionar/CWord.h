#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



class CWord
{
public:
	CWord();
	CWord(string word);
	CWord(const CWord &);
	~CWord();

	class CSynonym
	{
	public:
		CSynonym() { m_its = 0; }
		CSynonym(string synonym, int it) { m_synonym = synonym; m_its = it; }
		~CSynonym() {}

		void displaySynonym() { cout << "Synonym: " << m_synonym << endl; }
		int GetIterator() { return m_its; }
	private:
		string m_synonym;
		int m_its;
	};
	CSynonym s;


	void displayWord();

private:

	string m_word;
};

