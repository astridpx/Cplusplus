#include "Age_Validate.h"

void Age_Validate::Display_Vote(){
	cout << " Voting Validation " <<endl;
	cout <<endl;
	
	
	cout << " Enter Your Name: ";
	getline(cin, name);
	
	cout <<endl;
	cout << " Note: Age must be a number." <<endl;
	cout <<endl;
	
	cout << " Enter Your Age: ";
	
		
	while(!(cin >> age)){
		
		cout << " \nERROR " <<endl;
		cout << " Age must be a number. " <<endl;
		cout <<endl;
		
		cout << " Enter Your Age: ";
		cin >> age;
		
		cin.clear();
		cin.ignore(numeric_limits <streamsize> :: max(), '\n');
	
	}
	
	if (age >= 18 && age < 60){
		
		cout << " \nYou're able to vote." 
			 << " Vote Wisely. " <<endl; 
	}
	else if (age >= 60){
		
		cout << " \nYou're able to vote. "
			 << " You can use the special room "
			 << " For Seniors " <<endl;
	}
	else {
		
		cout << " You can't vote now, because you is only " << age << " yrs old. " <<endl;
	}

}
