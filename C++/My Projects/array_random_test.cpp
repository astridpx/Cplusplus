#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	
	string q[5]= {" What is the answer if you add 1 in 5? ", " How many sides does a triangela have? ", " What is the name of the sign +? ",
	" How many sides does square have? ", " What is the answer of 10 + 5 ?"} ;
	string ca[5] = {"6", "3", "plus", "4", "15"};
	string a[5];
	string temp, temps;
	int score = 0, rand_num;
	int x_score = 0;
	
	
	
	srand (time (NULL)); 
	
	for(int i = 0; i<=4; i++){
		rand_num = (rand() % (5-i)) + i; //rand() % 5;
		//swapping the question
		temp = q[i];
		q[i] = q[rand_num];
		q[rand_num] = temp;
		//swapping the corect answer
		temps = ca[i];
		ca[i] = ca[rand_num];
		ca[rand_num] = temps;	
	}
	// displaying the array to get the input
	for(int x = 0; x <= 4; x++){
		cout << " \nNo. " << x+1 << q[x] <<endl;
		cout << " \nAnswer: ";
		cin >> a[x];	
	}
	for(int y = 0; y <= 4; y++){
		if(ca[y] == a[y]){
			// display if the answer is correct
			cout << "\nNo." << y+1 << " Correct " <<endl;
			score = score + 1;	
		}
		// display if the answer is wrong
		else{		
			cout << "\nNo." << y+1 << " Wronng " <<endl;
			x_score = x_score + 1;
		}
		// this is the correction display
		cout << "\t" <<q[y] 
			 << " \n\tCorrect Answer : " << ca[y] 
			 << " \n\tYour Answer: " << a[y] <<endl;
	}
		cout << " \nTotal correct answer: " << score <<endl;
		cout << " \nTotal wrong answer: " << x_score <<endl;
	
	
	return 0;
}



