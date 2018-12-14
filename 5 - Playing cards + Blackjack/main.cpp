/*
* @file main.cpp
*
* @author © Cocîrlã Cristian-Gabriel
*
* @creation date 26/10/2018
*/


// problema facuta acum ceva timp, fara a avea multe cunostinte.
// de dearanjat clasele
// de eliminat variabilele globale
// de simplificat algoritmii folositi

#include "deck.h"
#include "blackjack.h"
using namespace std;

vector<string> player1; // Player1 cards
vector<string> player2; // Player2 cards
vector<string> Cards; //  generated cards in a specified order
vector<string> Shuffled; // shuffled cards

int main()
{
	

	DeckOfCards deck;
	BlackJack blackjack;

	while (true)
	{
		blackjack.BoolSet(); // bool values being used to know when switching between player's actions is needed

		int Player1Option;
		int Player2Option;
		int optiune_meniu_principal2;
		int sum1, sum2;

		cout << endl << "1 - Generate an ordered deck" << endl;
		cout << "2 - Generate & Shuffle a deck" << endl;
		cout << "3 - Blackjack" << endl;
		cout << "4 - Exit :(" << endl;
		cin >> optiune_meniu_principal2;

		switch (optiune_meniu_principal2)
		{
		case 1:
			deck.generate_deck();
			for (int i = 0; i < Cards.size(); i++)
			{
				cout << Cards.at(i) << endl;
				
			}
			Cards.clear();
			break;
		case 2:
			deck.generate_deck();
			deck.shuffle_deck();
			for (int i = 0; i < Shuffled.size(); i++)
			{
				cout << Shuffled.at(i) << endl;

			}
			Cards.clear();
			Shuffled.clear();
			break;
		case 3:
			system("CLS");
			deck.generate_deck();
			deck.shuffle_deck();


			cout << "================================" << endl;
			cout << "Player1 cards: " << endl;
			cout << Shuffled.at(1) << ", value: " << DeckValue[Shuffled.at(1)] << endl;
			cout << Shuffled.at(0) << ", value: " << DeckValue[Shuffled.at(0)] << endl;

			cout << "================================" << endl;
			cout << "Player2 cards: " << endl;
			cout << Shuffled.at(3) << ", value: " << DeckValue[Shuffled.at(3)] << endl;
			cout << Shuffled.at(2) << ", value: " << DeckValue[Shuffled.at(2)] << endl;
			blackjack.give2cards();
			blackjack.sum();

			while (blackjack.GetBool(1) == false || blackjack.GetBool(2) == false)
			{

				while (blackjack.GetBool(1) == false)
				{

					cout << endl << "Player1: (1 - Hit , 2 - Stand)" << endl;
					cin >> Player1Option;
					
					if (Player1Option == 1 && player1.size() < 5) // if Player1 has less than 5 cards in his hand, he gets another one
					{
						system("CLS");

						cout << "Player1 received: " << Shuffled.at(0) << ", value: " << DeckValue[Shuffled.at(0)] << endl << endl;
						player1.push_back(Shuffled.at(0)); // card at index 0 in <Shuffled> goes to <player1>
						Shuffled.erase(Shuffled.begin() + 0); // delete the card
						blackjack.ShowPlayersHand();
						blackjack.sum();
					}
					else if (Player1Option == 2)
					{
						blackjack.BoolChange(1); // true if Player1 stands
					}
				}

				while (blackjack.GetBool(2) == false)
				{
					cout << endl << "Player2: (1 - Hit , 2 - Stand)" << endl;
					cin >> Player2Option;

					if (Player2Option == 1 && player2.size() < 5)
					{
						system("CLS");

						cout << "Player2 received: " << Shuffled.at(0) << ", value: " << DeckValue[Shuffled.at(0)] << endl << endl;
						player2.push_back(Shuffled.at(0));
						Shuffled.erase(Shuffled.begin() + 0);
						blackjack.ShowPlayersHand();
						blackjack.sum();
					}
					else if (Player2Option == 2)
					{
						blackjack.BoolChange(2); // true if Player2 stands
					}
				}

			}


			sum1 = blackjack.GetFinalSumPlayer1();
			sum2 = blackjack.GetFinalSumPlayer2();

			if (sum1 > sum2 && sum1 <= 21)
			{
				cout << endl << "Player1 wins with " << sum1 << " points, congratulations! " << endl;
			}
			else if (sum1 < sum2 && sum2 <= 21)
			{
				cout << endl << "Player2 wins with " << sum2 << " points, congratulations! " << endl;
			}
			else if (sum1 > 21 && sum2 > 21)
			{
				if ((sum1 - 21) > (sum2 - 21))
				{
					cout << endl << "Both players lost but player2 is closer to 21" << endl;
				}
				if ((sum1 - 21) < (sum2 - 21))
				{
					cout << endl << "Both players lost but player1 is closer to 21" << endl;
				}
			}
			else
			{
				cout << endl << "Push! Both players reached " << sum1 << " points." << endl;
			}

			break;
		case 4:
			exit(1);
			break;
		default: cout << "Invalid input. Please try again by choosing a number between 1 and 4" << endl;
		}

		Cards.clear();
		Shuffled.clear();
		player1.clear();
		player2.clear();
	}

	


	system("Pause");
	return 0;
}