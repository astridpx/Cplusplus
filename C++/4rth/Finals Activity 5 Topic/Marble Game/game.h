#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <Windows.h>

using namespace std;

class game
{
	public:
		void gameDisplay();
		void Title();
		
	private:
		string name;		
		int rand_num; // random number
	
		string player_guess; 	// variables
		
		// Player marbles
		int player_marbles = 10;
		int computer_marbles = 10;
		int player_bet;
		int total_marbles;
};

#endif
