
#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <vector>
#include <unordered_map>
using namespace std;

extern vector<string> Cards; //  generated cards in a specified order
extern vector<string> Shuffled; // shuffled cards
extern vector<string> player1; // Player1 cards
extern vector<string> player2; // Player2 cards
extern unordered_map<string, int> DeckValue;
extern unordered_map<string, int> CardValue;

class BlackJack
{
public:
	BlackJack()
	{

	}

	void give2cards();
	void sum();
	void ShowPlayersHand();


	
	void BoolSet() { Player1Done = false; Player2Done = false; }
	void BoolChange(int x) { if (x == 1) Player1Done = true; if (x == 2) Player2Done = true; }
	bool GetBool(int x) { if (x == 1) return Player1Done; else return Player2Done; }

	int GetFinalSumPlayer1();
	int GetFinalSumPlayer2();

private:
	bool Player1Done;
	bool Player2Done;
	int FinalSumPlayer1 = 0;
	int FinalSumPlayer2 = 0;
};

#endif