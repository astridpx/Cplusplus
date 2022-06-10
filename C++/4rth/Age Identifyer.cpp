#include <iostream>

using namespace std;

class AgeIdentify{
	public:
		int year_born, present_year, age;
		
	void DisplayGetYear(){
		cout << " Enter the year you was born: ";
		cin >> year_born;
		
		cout << " \n Enter the present year: ";
		cin >> present_year;
		// computing age
		age = present_year - year_born;
		
		cout << " \n Your age is " << age << endl;		
	}
};

int main(){
	AgeIdentify obj;
	
	obj.DisplayGetYear();
	return 0;
}
