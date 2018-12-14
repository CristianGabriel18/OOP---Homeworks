#pragma once
#include "CWord.h"



class CDictionary :
	public CWord
{
public:
	CDictionary();
	~CDictionary();

	void Add(CWord* word);
	void Add(CWord::CSynonym* synonym);
	void SortLists();

	void PrintWord(int it);
	void PrintSynonyms(int it);
//	friend ostream& operator<<(ostream& os, CDictionary const& dictionary);
private:
	vector<CWord*> words;
	vector<CWord::CSynonym*> synonyms;
};

