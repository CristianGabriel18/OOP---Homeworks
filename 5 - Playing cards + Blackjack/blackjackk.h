#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

const int SUIT_MAX2(4);
const int RANK_MAX2(13);
static int no_c_bj = 0;


struct Player {
	string card[4];
	bool done;
} First, Second;

class Blackjack 
{
public:
	Blackjack();

private:
	void generate_deck();
	void shuffle_deck();
	void givecard();
};


