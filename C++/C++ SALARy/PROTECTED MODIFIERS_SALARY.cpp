// THE PROTECTED MODIFIERS

#include <bits/stdc++.h>
using namespace std;

// creating a parent class
class company
{
	
	protected:
		double hour, daily, weekly, monthly, annual;   // variables to compute user input to daily, weekly etc..
};

// creating a (employee) child class and making the (company) parent class to be public
class employee : public company
{
	public:
		
		void amount(double income) 
		{
			//computation for amount of user daily weekly etc...
			
			hour = income;   // user per hour value
			
			daily = 8*income;  // 8 hours * user income
			
			weekly = 40*income;   // 8 hours * user income
			
			monthly = 160*income;   // 8 hours * user income
			
			annual = 1920*income;   // 8 hours * user income
			
		}
		
		
		void display_amount()
		{
			cout<<"Your income is: $ "<< hour <<endl;
			cout<<"Your daily income is: $ "<< daily <<endl;
			cout<<"Your weekly income is: $ "<< weekly <<endl;
			cout<<"Your monthly income is: $ "<< monthly <<endl;
			cout<<"Your annual income is: $ "<< annual <<endl;
		}
				
};

// main function

int main(){
	
	double user; // user variable
	
	
	// user input
	cout << "***PROTECTED MODIFIERS*****" << endl;
	cout << " " << endl;
	cout<<"Enter a value: "<<endl;
	cin>>user; 
	
	employee inc;   // creating an object (inc) is a object
	
	
	inc.amount(user); // making user to be the value for amount
	inc.display_amount();
	return 0;
}

