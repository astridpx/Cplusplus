#include <iostream>
#include <iostream>
#include <limits>

using namespace std;

class convert{
	

	public:
		
		double value;
		double sum_f, sum_c;
		
		double faren_cel(){
			
		// farenheight - 32 / 1.8
			sum_f = value - 32;
			return sum_f / 1.8;
		}
		double  cel_faren(){
			// celsius x 1.8 + 32
			sum_c = value * 1.8;
			return sum_c + 32;
		}
		
	
	
};
int main(){
	
	convert conv;
	string user;
	double faren, celsius; 
	
	
	
	do{		
	
		
		cout << " Enter [1] - Fahrenheit to Celsius \n" 
			 << " Enter [2] - Celsius to Fahrenheit \n" 
			 << " Enter your choice: ";
		cin >> user; 

	
		
		if ( user == "1"){
			
			cout <<endl;
			cout << " \tEnter a value: ";
			conv.value = faren;
		
			while(!(cin >> faren)){
				
				cout <<endl;
				cout << " \tIt must be a number!!" <<endl;
				cout <<endl;
				
					
				cout << " \tEnter a value: ";
				cin >> faren;
				
				cin.clear();
				cin.ignore(numeric_limits <streamsize> :: max(), '\n');
			}
			
			cout << endl;
			cout << " The Farenheit if converts to Celsius is: " << conv.faren_cel() <<endl;
			
			return 0;
			
		}
		else if ( user == "2"){
			
				
			cout <<endl;
			cout << " \tEnter a value: ";
	//		cin >> celsius;
			conv.value = celsius;
			
			while(!(cin >> celsius)){
				
				cout <<endl;
				cout << " \tIt must be a number!!" <<endl;
				cout <<endl;
				
					
				cout << " \tEnter a value: ";
				cin >> celsius;
				
				cin.clear();
				cin.ignore(numeric_limits <streamsize> :: max(), '\n');
				}
			
			cout <<endl;
			cout << " The Celsius if converts to Farenhiet is: " << conv.cel_faren() <<endl;	
			
			return 0;	
		}
		
		else{
			cout << endl;
			cout << " Invalid Input " <<endl;
			cout <<endl;
		}
		
	
		
	}	while(user != "1" || user != "2");
	
	
	
	

		
}
