// The private modifiers

#include<iostream>
using namespace std;

class income
{
	// private data member
	private:
		double hour;
	
	// public member function	
	public:
		void amount(double time)
		{
			hour = time; //the hour convert to a time 
			
			//computation to get the amount of weekly etc.
			double  daily = 8*hour, weekly = 40*hour, monthly = 160*hour, annual = 1920*hour;
			
			cout<<"Your per hour income is: $ "<< hour <<endl;
			cout<<"Your daily is: $ "<< daily <<endl;
			cout<<"Your weekly is: $ "<< weekly <<endl;
			cout<<"Your monthly is: $ "<< monthly <<endl;
			cout<<"Your annual is: $ "<< annual <<endl;	
	}
};

int main()
{
	// creating object of the class (inc) is a object
	income inc;
	
		double user;  // user variable
		
		//the user input 
			cout << "****PRIVATE MODIFIERS*****" << endl;
			cout << " " << endl;
			cout<<"Enter a value: "<<endl;
			cin>>user;
			
			
			
	inc.amount(user); // making the user to be the value
	
	
	return 0;
}

