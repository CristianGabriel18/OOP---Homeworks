#include "CWord.h"


CWord::CWord()
{
}


CWord::CWord(string word)
{
	m_word = word;
}

CWord::CWord(const CWord & w)
{
	m_word = w.m_word;
}

CWord::~CWord()
{
}


void CWord::displayWord()
{
	cout << "Word: " << m_word << endl;
}

