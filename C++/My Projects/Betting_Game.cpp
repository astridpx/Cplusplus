#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

int main(){
	
	
	
	int rand_num; // random number
	
	string player_name, player_guess; 	// variables
	
	// Player marbles
	int player_marbles = 10;
	int computer_marbles = 10;
	int player_bet;
	int total_marbles;
	
  	cout << " *** BETTING GAME *** " <<endl;
  	cout <<endl;
  	cout << " *** Marbles Game *** " <<endl;
  	cout <<endl;
	
	// the player enter a name
	cout << "Enter your name: " <<endl;
	getline(cin, player_name);
	
	// if the player input a space or blank. ^ Not Accurate
	while (player_name == " " || player_name == "	" || player_name.empty()){
		
		cout << "Invalid Input" <<endl;
		cout <<endl;
			
		cout << "Enter your name: " <<endl;
		getline(cin, player_name);
		}
		
		// The Instruction
		cout <<endl;
		cout << "*** Player " << player_name << " we both have 10 marbles. \nWe need to guess it if it is ODD or EVEN. \nYou can bet from 1 to 10 using marbles."
		 "\nIf your guess is correct you Win but if not I win. \nThis game will stop until the player get all the marbles ***" <<endl;
		cout <<endl;  
		
	
	// while loop || The program will loop until the marbles of one player is less than or equal to 0
	while (player_marbles > 0  || computer_marbles > 0) {
		
		// Marbles display
		cout <<endl;
		cout << "Your Marbles: " << player_marbles <<endl;
		cout << "Enemy Marbles: " << computer_marbles <<endl;
		cout <<endl;
				
		// the player guess
		cout << "Player " << player_name <<endl;
		cout << "What is your guess: " <<endl;
		cin >> player_guess;
		
		// if the player guess input other , mispelled or input a blank it will loop
		while(player_guess != "Odd" && player_guess !=  "Even" && player_guess != "odd" && player_guess != "even"){
			
			cout <<endl;
			cout << "Invalid Input" <<endl;	
			cout <<endl;
			cout << "What is your guess: " <<endl;
			cin >> player_guess;
		}
		
		// player bet
		cout <<endl;
		cout << "Your bet: ";
		
		while(!(cin >> player_bet)){
			
			cout << " Invalid input. "
				 << " It must be a number. " <<endl;
				 
			cout <<endl;
			cout << "Your bet: ";
			
			cin.clear();
			cin.ignore(numeric_limits <streamsize> :: max(), '\n');
	}
		
		while (player_bet > 10){
			
			if (player_bet > computer_marbles){
				
				cout <<endl;
				cout << "That's too much." << " Enemy Tean Have Only " << computer_marbles << " Marbles "<<endl;
				cout <<endl;
				cout << "Your bet: ";
				cin >> player_bet;
			}
			else if (player_bet > player_marbles ){
				
				cout <<endl;
				cout << "That's too much." << " you Have Only " << player_marbles << " Marbles "<<endl;
				cout <<endl;
				cout << "Your bet: ";
				cin >> player_bet;
			}
		}
	

		
		// Random number for marble draw
		srand (time (NULL)); 
		rand_num = rand() % 10;
		
		cout <<endl;
		cout << "The marbles in my hand are ";
		cout << rand_num << " marbles" <<endl;
	
		// The Program determine if the random number is odd or even
	
		// For Even Numbers
		if (rand_num % 2 == 0){
			cout << rand_num << " is an even number" <<endl;
			
			//if the player is correct for choosing even
			if ( player_guess == "even" || player_guess == "Even"){
				
				// computation for marbles
				player_marbles = player_marbles + player_bet;
				computer_marbles = computer_marbles - player_bet;
				
				cout <<endl;
				cout << "Good Job. You Got A Correct Answer" <<endl;
				
					// game will stop if one of the player marbles is 0	
					if (player_marbles <= 0 || computer_marbles <= 0){	
				
					cout << "Your Marbles: " << player_marbles <<endl;
					cout << "Enemy Marbles: " << computer_marbles <<endl;
					cout <<endl;
					
					cout << "Game Over" <<endl;
						if (player_marbles > 0){
							
							cout <<endl;
							cout << " Player " << player_name << " You WIn " <<endl;
						}
						else {
							
							cout <<endl;
							cout << " Player " << player_name << " You Lose " <<endl;
						}
						
					return 0;
					}
			}
			 
			// if the player choosing even but the answer is odd
			else if (player_guess != "Even" || player_guess != "even"){
				
				// marble computation
				player_marbles = player_marbles - player_bet;
				computer_marbles = computer_marbles + player_bet;
				
				cout <<endl;
				cout << "Your Answer Is Wrong" <<endl;
				
					// game will stop if one of the player marbles is 0	
					if (player_marbles <= 0 || computer_marbles <= 0){	
					
					cout << "Your Marbles: " << player_marbles <<endl;
					cout << "Enemy Marbles: " << computer_marbles <<endl;
					cout <<endl;
					
					cout << "Game Over" <<endl;
					
						if (player_marbles > 0){
							
							cout <<endl;
							cout << " Player " << player_name << " You WIn " <<endl;
						}
						else {
							
							cout <<endl;
							cout << " Player " << player_name << " You Lose " <<endl;
						}
						
					return 0;
				}
			} //end of else if
			
	} // end of if in even number determine
		
		// Else For Odd Numbers
		else{
			cout << rand_num << " is an odd number" <<endl;
			cout <<endl;
			
			// if  the player is correct for choosing odd
			if (player_guess == "Odd" || player_guess == "odd"){
				
				// marble computation
				player_marbles = player_marbles + player_bet;
				computer_marbles = computer_marbles - player_bet;
				
				cout <<endl;
				cout << "Good Job. You Got A Correct Answer" <<endl;
			
					// game will stop if one of the player marbles is 0	
					if (player_marbles <= 0 || computer_marbles <= 0){
					
					cout << "Your Marbles: " << player_marbles <<endl;
					cout << "Enemy Marbles: " << computer_marbles <<endl;
					cout <<endl;
				
					cout << "Game Over" <<endl;
					
						if (player_marbles > 0){
								
							cout <<endl;
							cout << " Player " << player_name << " You WIn " <<endl;
						}
						else {
								
							cout <<endl;
							cout << " Player " << player_name << " You Lose " <<endl;
						}
						
					return 0;
				}
			}
			
			// if the player odd but the answer is even
			else if(player_guess != "Odd" || player_guess != "odd" ){
				
				// marble computation
				player_marbles = player_marbles - player_bet;
				computer_marbles = computer_marbles + player_bet;
				
				cout <<endl;
				cout << "Your Answer Is Wrong" <<endl;
				
					// game will stop if one of the player marbles is 0	
					if (player_marbles <= 0 || computer_marbles <= 0){	
				
					cout << "Your Marbles: " << player_marbles <<endl;
					cout << "Enemy Marbles: " << computer_marbles <<endl;
					cout <<endl;
					
					cout << "Game Over" <<endl;
					
						if (player_marbles > 0){
							
							cout <<endl;
							cout << " Player " << player_name << " You WIn " <<endl;
						}
						else {
							
							cout <<endl;
							cout << " Player " << player_name << " You Lose " <<endl;
						}
						
					return 0;
					}
					
			} // end of else if
			
		} // end of else in odd number determine
	

} // end of while loop whole program	

		
	
} // end of main function





