//THE PUBLIC MODIFIEES

#include <string>
#include<iostream>
using namespace std;

// class definition
class Income
{
		public:
			double hour;
			
			//daily income process
			double compute_daily()
			{
				return 8*hour;  // 8 hours * user input
			}
			
			//weekly income process
			double compute_weekly()
			{
				return 40*hour; // 40 hours * user input
			}
			
			// monthly income process
			double compute_monthly()
			{
				return 160*hour; //  160 hours * user input 
			}
			
			// annual / yearly income process
			double compute_annual()
			{
				return 1920*hour;	// 1920  * user input
			}
			
};

int main()
{
	Income inc;      // creaating object (inc) is a object
	
	double per_hour_value; 
	
	string name = "john";
	string pass = "1234";
	int guess_count = 0; // it is for incrementation if user enter wrong value
	int pass_count = 0;
	
	cout << "Enter your name: "<< endl;
	cin >> name;
	
	while (name != "john"){
		 
		if (guess_count < 3) // this the user guess limit. USER HAS ONLY 4 TIMES OF GUESS
		{
		
			cout << "Invalid name" << endl;
			cout << " " << endl;
			cout << "Enter your name: "<< endl;
			cin >> name;
			guess_count++; // increamention for user input wrong value
		}
		

		// if the user guess_Count is equal to 4 the program will stop
		else 
		{
			cout << "Too Many Input!  \nTry again later!" << endl;
			return 0; // to stop the program
		}
		
	}
	
	// This is for the password if user enter the correct value this area will display
	
	if (name == "john") // if the user enter the correct value  password input display
	{	
		cout << "Enter your password: " << endl;
		cin >> pass;
	}
	
	// if user input incorrect password it will loop for 4 times but it the password value is correct login success	
	while (pass != "1234"){      
		
		if (pass_count < 3 )
		{
			cout << " " << endl;
			cout << "Invalid password" << endl;
			cout << " " << endl;
			cout << "Enter your password: " << endl;
			cin >> pass;
			pass_count++;	// incrementation for pass count to count how many times the user input wrong value. If user reaches 4 times program will stop 
		}	
		
		
		else {
			cout << "Too Many Input!  \nTry again later!" << endl;
			return 0; // return 0 to stop program
		}	
		
	}	
			
		
	// If the user enter the correct value for name and password
		
		cout << "Login Success!" << endl;
		cout << " "<< endl;
		cout <<"Enter a value: "<< endl;   // user input
		cin >> per_hour_value;
		
		inc.hour = per_hour_value;    // making the user to be the value
	
	
	cout <<"Your per hour salary is: $ " << inc.hour << endl;
	cout <<"Your daily is: $ " << inc.compute_daily() << endl;
	cout <<"Your weekly is: $ " << inc.compute_weekly() << endl;
	cout <<"Your monthly is: $ " << inc.compute_monthly() << endl;
	cout <<"Your annual is: $ " << inc.compute_annual() << endl;
	return 0;
	
}
