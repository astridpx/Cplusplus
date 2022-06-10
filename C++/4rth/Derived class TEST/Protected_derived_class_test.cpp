// protectted members
#include <iostream>

using namespace std;

class Animal{
	private:
		string color;
		
	protected:
		string type;
		
	public:
		void eat(){
			cout << " I can eat! " <<endl;
		}
		
		void sleep(){
			cout << " I can sleep " <<endl;
		}
		
		// accessing private color
		void setColor(string clr){
			color = clr;
		}
		
		string getColor(){
			return color;
		}
};

// Derived Class
class Dog : public Animal {
	public:
		void setType(string tp){
			type = tp;
		}
		
		void displayInfo(string c){
			cout << " I am a " << type <<endl;
			cout << " My color is " << c <<endl;
		}
		
		void bark(){
			cout << " I can bark! Woof Woof!! " <<endl;
		}
};

int main(){
	// create object for dog
	Dog obj;
	
	// calling the member of base class
	obj.eat();
	obj.sleep();
	obj.setColor("Black");
	
	// calling men=mbers of derived class
	obj.bark();
	obj.setType("Mammal");
	
	//using getcolor of obj as argument
	// getcolor returns string data
	obj.displayInfo(obj.getColor());
	
	return 0;
	
	return 0;
}

