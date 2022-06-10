#include <iostream>
#include <string>
using namespace std;

class studentInformation{
	public: 
	
	string name, program, year, section, age;
	
	
	
	void studentInfoDisplay(){
		cout<< "Name: " << name <<endl;
		cout<< "Program: " << program <<endl;
		cout<< "Year: " << year <<endl;
		cout<< "Section: " << section <<endl;
		cout<< "Age: " << age <<endl;
	}
	
	studentInformation(string names, string programs, string years, string sections, string ages){
		name = names;
		program = programs;
		year = years;
		section = sections;
		age = ages;
	}
	
};


int main (){
	
	studentInformation studInfo3 = studentInformation ("Joe","bsit","2nd year","bsit-1a1","13");
	
	studInfo3.studentInfoDisplay();
	
	
	return 0;
}















