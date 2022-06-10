#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <Windows.h>

using namespace std;

class game{
	public:
		
		string name;		
		int rand_num; // random number
	
		string player_guess; 	// variables
		
		// Player marbles
		int player_marbles = 10;
		int computer_marbles = 10;
		int player_bet;
		int total_marbles;
			
		void gameDisplay(){
						
			// The Instruction
			cout <<endl;
			cout << " Player " << name << " we both have 10 marbles. \n "
				 << " We need to guess it if it is ODD or EVEN. \n" 
				 << " You can bet from 1 to 10 using marbles. \n"
			     << " If your guess is correct you Win but if not I win. \n"
				 << " This game will stop until the player get all the marbles "
				 << endl;  
			
			
			// while loop || The program will loop until the marbles of one player is less than or equal to 0
			while (player_marbles > 0  && computer_marbles > 0) {
				
				// Marbles display
				cout <<endl;
				cout << " Your Marbles: " << player_marbles <<endl;
				cout << " Enemy Marbles: " << computer_marbles <<endl;
				cout <<endl;
						
				// the player guess
				cout << " \t Player " << name <<endl;
				cout << " \t What is your guess: ";
				cin >> player_guess;
				
				// if the player guess input other , mispelled or input a blank it will loop
				while(player_guess != "Odd" && player_guess !=  "Even" && player_guess != "odd" && player_guess != "even"){
					
					cout <<endl;
					cout << " \t Invalid Input" <<endl;	
					cout <<endl;
					cout << " \t What is your guess: ";
					cin >> player_guess;
				}
				
				// player bet
				cout <<endl;
				cout << " \t Your bet: ";
				
				// INPUT VALIDATION
				while(!(cin >> player_bet)){
					
					cout << " \t Invalid input. \n"
						 << " \t It must be a number. " <<endl;
						 
					cout <<endl;
					cout << " \t Your bet: ";
					
					cin.clear();
					cin.ignore(numeric_limits <streamsize> :: max(), '\n');
			}
				
			//	while (player_bet > 10){
					
					while (player_bet > 10){
						
						cout <<endl;
						cout << " \t That's too much. You Have Only " << player_marbles << " Marbles " <<endl;
						cout <<endl; 
						cout << " \t Your bet: ";
						cin >> player_bet;
					
					}
					while (player_bet > player_marbles ){
						
						cout <<endl;
						cout << " \t That's too much." << " You Have Only " << player_marbles << " Marbles "<<endl;
						cout <<endl;
						cout << " \t Your bet: ";
						cin >> player_bet;
					}
					while (player_bet > computer_marbles){
												
						cout <<endl;
						cout << " \t That's too much." << " Enemy Tean Have Only " << computer_marbles << " Marbles "<<endl;
						cout <<endl;
						cout << " \t Your bet: ";
						cin >> player_bet;
					}
					while (player_bet < 0){
						
						cout <<endl;
						cout << " \t INVALID BET. Bet atleast in the range 0 above " << endl;
						cout <<endl;
						cout << " \t Your bet: ";
						cin >> player_bet;
					}
				//}
			
		
				
				// Random number for marble draw
				srand (time (NULL)); 
				rand_num = rand() % 10;
				
				cout <<endl;
				cout << " \t The marbles in my hand are ";
				cout << rand_num << " marbles" <<endl;
			
				// The Program determine if the random number is odd or even
			
				// For Even Numbers
				if (rand_num % 2 == 0){
					cout << " \t " << rand_num << " is an even number" <<endl;
					
					//if the player is correct for choosing even
					if ( player_guess == "even" || player_guess == "Even"){
						
						// computation for marbles
						player_marbles = player_marbles + player_bet;
						computer_marbles = computer_marbles - player_bet;
						
						cout <<endl;
						cout << " \t Good Job. You Got A Correct Answer" <<endl;
						
							// game will stop if one of the player marbles is 0	
							if (player_marbles <= 0 || computer_marbles <= 0){	
							
							cout <<endl;
							cout << " Your Marbles: " << player_marbles <<endl;
							cout << " Enemy Marbles: " << computer_marbles <<endl;
							cout <<endl;
							
							cout << " \t GAME OVER " <<endl;
								if (player_marbles > 0){
									
									cout <<endl;
									cout << " \t Player " << name << " You WIn " <<endl;
								}
								else {
									
									cout <<endl;
									cout << " \t Player " << name << " You Lose " <<endl;
								}
							
							cout <<endl;
							cout << "-------------------------------------------------------------- \n"
								 << "-------- THANKS ---------------------------------------------- \n"
								 << "---------------- FOR ----------------------------------------- \n"
								 << "--------------------- PLAYING -------------------------------- \n"
								 <<endl;		
							exit(0); // terminate the prgram
							}
					}
					 
					// if the player choosing even but the answer is odd
					else if (player_guess != "Even" || player_guess != "even"){
						
						// marble computation
						player_marbles = player_marbles - player_bet;
						computer_marbles = computer_marbles + player_bet;
						
						cout <<endl;
						cout << " \t Your Answer Is Wrong " <<endl;
						
							// game will stop if one of the player marbles is 0	
							if (player_marbles <= 0 || computer_marbles <= 0){	
							
							cout <<endl;
							cout << " Your Marbles: " << player_marbles <<endl;
							cout << " Enemy Marbles: " << computer_marbles <<endl;
							cout <<endl;
							
							cout << " \t Game Over" <<endl;
							
								if (player_marbles > 0){
									
									cout <<endl;
									cout << " \t Player " << name << " You WIn " <<endl;
								}
								else {
									
									cout <<endl;
									cout << " \t Player " << name << " You Lose " <<endl;
								}
							cout <<endl;
							cout << "-------------------------------------------------------------- \n"
								 << "-------- THANKS ---------------------------------------------- \n"
								 << "---------------- FOR ----------------------------------------- \n"
								 << "--------------------- PLAYING -------------------------------- \n"
								 <<endl;	
								 
							exit(0);
						}
					} //end of else if in child
					
			} // end of parent if in even number determine
				
				// Else For Odd Numbers
				else{
					cout << " \t " << rand_num << " is an odd number" <<endl;
					cout <<endl;
					
					// if  the player is correct for choosing odd
					if (player_guess == "Odd" || player_guess == "odd"){
						
						// marble computation
						player_marbles = player_marbles + player_bet;
						computer_marbles = computer_marbles - player_bet;
						
						cout <<endl;
						cout << " \t Good Job. You Got A Correct Answer" <<endl;
					
							// game will stop if one of the player marbles is 0	
							if (player_marbles <= 0 || computer_marbles <= 0){
							
							
							cout <<endl;
							cout << " Your Marbles: " << player_marbles <<endl;
							cout << " Enemy Marbles: " << computer_marbles <<endl;
							cout <<endl;
						
							cout << "\t GAME OVER " <<endl;
							
								if (player_marbles > 0){
										
									cout <<endl;
									cout << " \t Player " << name << " You WIn " <<endl;
								}
								else {
										
									cout <<endl;
									cout << " \t Player " << name << " You Lose " <<endl;
								}
							cout <<endl;
							cout << "-------------------------------------------------------------- \n"	
								 << "-------- THANKS ---------------------------------------------- \n"
								 << "---------------- FOR ----------------------------------------- \n"
								 << "--------------------- PLAYING -------------------------------- \n"
								 <<endl;		
							exit(0);
						}
					}
					
					// if the player odd but the answer is even
					else if(player_guess != "Odd" || player_guess != "odd" ){
						
						// marble computation
						player_marbles = player_marbles - player_bet;
						computer_marbles = computer_marbles + player_bet;
						
						cout <<endl;
						cout << " \t Your Answer Is Wrong " <<endl;
						
							// game will stop if one of the player marbles is 0	
							if (player_marbles <= 0 || computer_marbles <= 0){	
							
							cout <<endl;
							cout << " Your Marbles: " << player_marbles <<endl;
							cout << " Enemy Marbles: " << computer_marbles <<endl;
							cout <<endl;
							
							cout << " \t GAME OVER " <<endl;
							
								if (player_marbles > 0){
									
									cout <<endl;
									cout << " \t Player " << name << " You WIn " <<endl;
								}
								else {
									
									cout <<endl;
									cout << " \t Player " << name << " You Lose " <<endl;
								}
							
							cout <<endl;
							cout << "-------------------------------------------------------------- \n"
								 << "-------- THANKS ---------------------------------------------- \n"
								 << "---------------- FOR ----------------------------------------- \n"
								 << "--------------------- PLAYING -------------------------------- \n"
								 <<endl;	
							exit(0);
							}
							
					} // end of else if child
					
				} // end of else in odd number determine
	
	
		} // end of while loop whole program	
		
				
			
		} // end of void
		
		// The comnstructor
		game(string Player_Name){
			
			name = Player_Name;
		}


}; // end of class


// MAIN FUNCTION
int main(){
	
	string player_name;
	
	Sleep(1000);
  	cout << "--------------------------------------------------------------" <<endl;
	Sleep(1000);					
	cout << "-------- BETTING---------------------------------------------- " <<endl;
	Sleep(1000);
	cout << "---------------- GAME ---------------------------------------- " <<endl;
	Sleep(1000);
	cout <<endl;					
	
	// the player enter a name
	cout << "Enter your name: " <<endl;
	getline(cin, player_name);
	
	
	game play =game(player_name);
	
	play.gameDisplay();
	

} // end of main function





