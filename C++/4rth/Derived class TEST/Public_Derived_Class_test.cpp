#include <iostream>

using namespace std;

// Base Calss
class Animal {
	public:
		void eat(){
			cout << " I can eat! " <<endl; 
		}
	void sleep(){
		cout << " I can slepp " <<endl;
	}
};

// Derivedd class
class Dog : public Animal{
	public:
		void Bark(){
			cout << " I can bark!. Woof Woof!! " <<endl;
		}
};

int main(){
	// create object for dog class
	Dog obj;
	
	//calling the members of base class
	obj.eat();
	obj.sleep();
	
	// calling the members of derivedd class
	obj.Bark();
	
	return 0;
}
