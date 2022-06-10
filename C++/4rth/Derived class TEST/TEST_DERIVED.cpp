// protectted members
#include <iostream>

using namespace std;

class Animal{
	private:
		string color;
		string legs;
		
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
		
		void setLegs(string leg){
			legs = leg;
		}
		string getLeg(){
			return legs;
		}
};

// Derived Class
class Dog : public Animal {
	public:
		void setType(string tp){
			type = tp;
		}
		
		void displayInfo(string c, string a){
			cout << " I am a " << type <<endl;
			cout << " My color is " << c <<endl;
			cout << " My legs are " << a <<endl;
		}
		
		void bark(){
			cout << " I can bark! Woof Woof!! " <<endl;
		}
};

int main(){
	// create object for dog
	Dog obj;
	string col, typ, feet;
	
	
	cout << " Enter the color: ";
	cin >> col;
	
	cout << " Enetr the type: ";
	cin >> typ;
	
	cout << " How many legs: ";
	cin >> feet;
	
	// calling the member of base class
	obj.eat();
	obj.sleep();
	obj.setColor(col);
	
	// calling men=mbers of derived class
	obj.bark();
	obj.setType(typ);
	
	obj.setLegs(feet);
	
	//using getcolor of obj as argument
	// getcolor returns string data
	obj.displayInfo(obj.getColor(), obj.getLeg());

	
	return 0;
}

