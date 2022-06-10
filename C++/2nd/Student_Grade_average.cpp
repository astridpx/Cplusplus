#include <iostream>
#include <string>
using namespace std;

class StudentGrades{
	public:
		
		string name;
		int math, filipino, english, pe, science, nts, oop, literature, physics, hci, stud;
		double average, sum;
		
		
		void StudentGradeDisplay(){  // Display the student grade
			
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
			cout<< "The total sum of your grade is: " << sum <<endl;
			cout<<" " <<endl;
			cout<< "Your total average is: " << average <<endl;
			
			if( average >= 75){
				cout<<" " <<endl;
				cout<< "Congratulation " << name << " You Passed It !!" <<endl;
				cout<<" " <<endl;
			}
			else{
				cout<<" " <<endl;
				cout<< "Im Sorry, " << name << " You Failed !!" <<endl;
				cout<<" " <<endl;
			}
				
		}
		
		
};

int main(){
	
	StudentGrades student;
	
	int studentname_count = 0;
	int student_num = 1;

	while (studentname_count != 10){    // while the name of student is not equal to ten the program will loop
		
		cout<< "Student NO." << student_num << " \nEnter your name: " <<endl;
		cin>>student.name;
			studentname_count++; // it count the no. of student
			student_num++; // it count how many name inputed
		cout<< " " <<endl;	
				
			
		// student grades	
			
		cout<< "Math: " ;
		cin>>student.math;
		cout<< "Filipino: " ;
		cin>>student.filipino;
		cout<< "English: " ;
		cin>>student.english;
		cout<< "P.E.: " ;
		cin>>student.pe;
		cout<< "Science: " ;
		cin>>student.science;
		cout<< "NTS: " ;
		cin>>student.nts;
		cout<< "OOP: " ;
		cin>>student.oop;
		cout<< "Literature: " ;
		cin>>student.literature;
		cout<< "Physics: " ;
		cin>>student.physics;
		cout<< "HCI: " ;
		cin>>student.hci;
		cout<< " " <<endl;
		
		// average computation
		
		student.sum = student.filipino + student.english + student.hci + student.literature + student.math + student.nts + student.oop + student.pe + student.physics + student.science;
		student.average = student.sum / 10;
		student.StudentGradeDisplay();
	//	return 0;

	
}
}
