#include "blackjack.h"





const string SUIT2[SUIT_MAX2] = { "Spades", "Hearts", "Diamonds", "Clubs" };
const string RANK2[RANK_MAX2] = { "2","3","4","5","6","7","8","9","10","J","Q","K","A" };

vector<string> CardsGame; //Create vector to store deck names in.

Blackjack::Blackjack()
{
	givecard();
}

void Blackjack::generate_deck()
{

	string card;

	for (int i = 0; i < SUIT_MAX2; i++)
	{
		for (int j = 0; j < RANK_MAX2; j++)
		{
			card = RANK2[j] + " of " + SUIT2[i];

			CardsGame.push_back(card);

			//cout << card << endl;

			no_c_bj++;
		}
	}

}
vector<string> Shuffled; // stre shuffled cards afther they we're generated 

void Blackjack::shuffle_deck()
{
	//	int& c = no_cards;
	srand(time(NULL));
	while (no_c_bj > 0)
	{
		int temp = rand() % no_c_bj;
		string DrawCard = CardsGame.at(temp);
		CardsGame.erase(CardsGame.begin() + temp);
		Shuffled.push_back(DrawCard);
		no_c_bj--;

		cout << DrawCard << endl;
	}

}

void Blackjack::givecard()
{
	cout << "Player 1: " << endl;
	First.card[0] = Shuffled.at(0);
	cout << First.card[0] << endl;
	First.card[1] = Shuffled.at(1);
	cout << First.card[0] << endl;
}

Blackjack::Blackjack()
{

}