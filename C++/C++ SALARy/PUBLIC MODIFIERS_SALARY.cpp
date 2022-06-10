//THE PUBLIC MODIFIEES

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
	
	double user; 
	
	cout << "****PUBLIC MODIFIERS*****" << endl;
	cout << " " << endl;
	cout<<"Enter a value: "<<endl;   // user input
	cin>>user;
	
	inc.hour = user;    // making the user to be the value
	
	
	cout<<"Your per hour salary is: $ "<< inc.hour <<"\n";
	cout<<"Your daily is: $ "<< inc.compute_daily() <<endl;
	cout<<"Your weekly is: $ "<< inc.compute_weekly() <<endl;
	cout<<"Your monthly is: $ "<< inc.compute_monthly() <<endl;
	cout<<"Your annual is: $ "<< inc.compute_annual() <<endl;
	return 0;
}
