#ifndef BASE_H
#define BASE_H
#include "Derived.h"
#include <iostream>

using namespace std;

class Base
{
	private:
		string name;
		int age;
		
	protected:
		string email;
	public:
		void DisplayValidate();
		void Title(){
			cout << " Election age Validation " <<endl;
		}
		
	
		void setAge(int ages){
			age = ages;
		}
		int getAge(){
			return age;
		}
		
		void setName(string names){
			name = names;
		}
		string getName(){
			return name;
		}
};

#endif
