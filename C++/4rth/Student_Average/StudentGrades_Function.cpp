#include "StudentGrades.h"

void StudentGrades::StudentGradeDisplay(){  // Display the student grade
		
		cout<< "Name: " << name<<endl;
		cout<< "Grade in Math: " << math <<endl;
		cout<< "Grade in Filipino: " << filipino <<endl;
		cout<< "Grade in English: " << english <<endl;
		cout<< "Grade in P.E.: " << pe <<endl;
		cout<< "Grade in Science: " << science <<endl;
		cout<< "Grade in NTS: " << nts <<endl;
		cout<< "Grade in OOP: " << oop <<endl;
		cout<< "Grade in Literature: " << literature <<endl;
		cout<< "Grade in Physics: " << physics <<endl;
		cout<< "Grade in HCI: " << hci <<endl;
		
		// total average
		cout<< "\nThe total sum of your grade is: " << sum <<endl;
		cout<<" " <<endl;
		cout<< "Your total average is: " << average <<endl;
		
		if( average >= 75){
			cout<<" " <<endl;
			cout<< "Congratulation " << name << " You Passed It !!" <<endl;
			cout<<" " <<endl;
			Sleep(3000);
			system("cls");
		}
		else{
			cout<<" " <<endl;
			cout<< "Im Sorry, " << name << " You Failed !!" <<endl;
			cout<<" " <<endl;
			Sleep(3000);
			system("cls");
		}
			
	}

