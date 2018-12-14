#pragma once
#ifndef DECK_H
#define DECK_H


#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <unordered_map>
using namespace std;

extern vector<string> Cards; //  generated cards in a specified order
extern vector<string> Shuffled; // shuffled cards

const int SUIT_MAX(4);
const int RANK_MAX(13);





class DeckOfCards
{
	friend class blackjack;
public:

	DeckOfCards()
	{
	}

	void generate_deck();
	void shuffle_deck();


private:
	string card;
	string DrawCard;
	int no_cards;
};



#endif