#include "deck.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <ctime>

using namespace std;


const string SUIT[SUIT_MAX] = { "Spades", "Hearts", "Diamonds", "Clubs" };
const string RANK[RANK_MAX] = { "2","3","4","5","6","7","8","9","10","J","Q","K","A" };

unordered_map<string, int> DeckValue;
unordered_map<string, int> CardValue = { // establish a link between RANKS and their values

{"[2]",2},
{"[3]",3},
{"[4]",4},
{"[5]",5},
{"[6]",6},
{"[7]",7},
{"[8]",8},
{"[9]",9},
{"[10]",10},
{"[J]",10},
{"[Q]",10},
{"[K]",10},
{"[A]",11}
};


void DeckOfCards::generate_deck()  // generating and shuffling our deck, also stores their values in <DeckValue> and the order in <Shuffled>
{


	for (int i = 0; i < SUIT_MAX; i++)
	{
		for (auto j : CardValue)
		{
			card = j.first + " of " + SUIT[i];
			DeckValue[card] = CardValue[j.first];
			Cards.push_back(card);
		}
	}

}

void DeckOfCards::shuffle_deck()
{
	no_cards = 52;
	srand(time(NULL));

	while (no_cards > 0)
	{
		int temp = rand() % no_cards;
		DrawCard = Cards.at(temp);
		Cards.erase(Cards.begin() + temp);
		Shuffled.push_back(DrawCard);
		no_cards--;
	}
}
