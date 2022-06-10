#ifndef DERIVED_H
#define DERIVED_H
#include "Base.h"


class Derived : public Base{
	public:
		void setMail(string mail){
			email = mail;
		}
		
		void DisplayValidate(string Name, int Age){
		
			cout << " \n Hello " << Name <<endl;
			
			if(Age < 18){
				cout << " \nSorry You're not able to vote " <<endl;
			}
			else if((Age >= 18) && (Age < 60)){
				cout << " \nYou're able to vote " <<endl;
				cout << " \nHi " << Name << " We will send you the exact date of voting in your email " << email <<endl;		
			}
			else if(Age >= 60){
				cout << " \nYou're a senior. You can use the reserved room for senior to vote eassy " <<endl;
				cout << " \nHi " << Name << " We will send you the exact date of voting in your email " << email <<endl;		
			}
			else{
				cout << " \nYou're age is invalid " << endl;
			}
			

		}
	
	
};

#endif
