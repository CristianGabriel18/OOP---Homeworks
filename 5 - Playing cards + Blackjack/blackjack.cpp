#include "blackjack.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <unordered_map>
#include <ctime>




void BlackJack::give2cards()
{
	player1.push_back(Shuffled.at(1));
	player1.push_back(Shuffled.at(0));
	Shuffled.erase(Shuffled.begin() + 1);
	Shuffled.erase(Shuffled.begin() + 0);



	player2.push_back(Shuffled.at(1));
	player2.push_back(Shuffled.at(0));
	Shuffled.erase(Shuffled.begin() + 1);
	Shuffled.erase(Shuffled.begin() + 0);

}

void BlackJack::sum()
{
	int sum = 0; // using 1 integer for both players
	bool blackjack1 = false;
	bool blackjack2 = false;

	for (unsigned int k = 0; k < player1.size(); k++) // used unsigned int K to avoid Warning as vector.size() returns an unsigned int
	{
		sum = sum + DeckValue[player1.at(k)]; // sum for p1 hand
	}

	if (sum == 21)
	{
		cout << "Player1 has blackjack. " << endl;
		blackjack1 = true;
		Player1Done = true;
		sum = 0;
		/*system("Pause");
		exit(1)*/;
	}

	if (sum > 21)
	{
		for (unsigned int k = 0; k < player1.size(); k++)
		{
			if (DeckValue[player1.at(k)] == 11)
			{
				sum -= 10; // if sum exceeded 21 and player1 has an Ance in his hand, automatically the Ace's value is modified from 11 to 1.
			}
		}
	}

	if (sum > 21)
	{
		cout << "Player1's hand exceeded 21." << endl;
		sum = 0;
	}
	else
	{
		sum = 0;
	}


	for (unsigned int l = 0; l < player2.size(); l++)
	{

		sum = sum + DeckValue[player2.at(l)];
	}


	if (sum == 21)
	{
		cout << "Player2 has blackjack." << endl;
		blackjack2 = true;
		Player2Done = true;
		sum = 0;
		/*system("Pause");
		exit(1);*/
	}

	if (sum > 21)
	{
		for (unsigned int k = 0; k < player2.size(); k++)
		{
			if (DeckValue[player2.at(k)] == 11)
			{
				sum -= 10;
			}
		}
	}

	if (sum > 21)
	{
		cout << "Player2's hand exceeded 21." << endl;
		sum = 0;

	}
	else
	{
		sum = 0;
	}
}

void BlackJack::ShowPlayersHand() // easy one
{

	cout << "Player1 has the following cards: " << endl;

	for (unsigned int i = 0; i < player1.size(); i++)
	{
		cout << player1.at(i) << endl;
	}
	cout << endl << endl;

	cout << "Player2 are urmatoarele carti: " << endl;

	for (unsigned int i = 0; i < player2.size(); i++)
	{
		cout << player2.at(i) << endl;
	}
	cout << endl << endl;

}

int BlackJack::GetFinalSumPlayer1() // final sum; used to show the winner and also the value of his hand
{

	for (unsigned int k = 0; k < player1.size(); k++)
	{

		FinalSumPlayer1 = FinalSumPlayer1 + DeckValue[player1.at(k)];
	}
	if (FinalSumPlayer1 > 21)
	{
		for (unsigned int k = 0; k < player2.size(); k++)
		{
			if (DeckValue[player1.at(k)] == 11)
			{
				FinalSumPlayer1 -= 10;
			}
		}
	}

	return FinalSumPlayer1;

}

int BlackJack::GetFinalSumPlayer2() // final sum; used to show the winner and also the value of his hand
{


	for (unsigned int k = 0; k < player2.size(); k++)
	{
		FinalSumPlayer2 = FinalSumPlayer2 + DeckValue[player2.at(k)];
	}
	if (FinalSumPlayer2 > 21)
	{
		for (unsigned int k = 0; k < player2.size(); k++)
		{
			if (DeckValue[player2.at(k)] == 11)
			{
				FinalSumPlayer2 -= 10;
			}
		}
	}

	return FinalSumPlayer2;

}