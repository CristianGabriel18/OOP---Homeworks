#include "CDictionary.h"

CDictionary::CDictionary()
{
}


CDictionary::~CDictionary()
{
}


void CDictionary::Add(CWord* word)
{
	words.push_back(word);
}

void CDictionary::Add(CWord::CSynonym*  synonym)
{
	synonyms.push_back(synonym);
}

void CDictionary::SortLists()
{
//	words.sort();
	sort(words.begin(), words.end());
	sort(synonyms.begin(), synonyms.end());
//	synonyms.sort();
}

void CDictionary::PrintWord(int it)
{
	 words.at(it)->displayWord();
}

void CDictionary::PrintSynonyms(int it)
{
	for (int i = 0; i < synonyms.size(); i++)
	{
		if (it == synonyms.at(i)->GetIterator())
		{
			synonyms.at(i)->displaySynonym();
		}
	}
}

//ostream & operator<<(ostream& os, CDictionary const& dictionary)
//{
//	for (auto i : dictionary.words)//(auto i = dictionary.words.begin() ; i != dictionary.words.end(); i++)
//	{
//		i->display();
//	}
//	return os;
//}

