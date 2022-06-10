#include <iostream>
#include <string>
using namespace std;

class StudentGrades{
	public:
		
		string name;
		int math, filipino, english, pe, science, nts, oop, literature, physics, hci;
		double sum, average;
		
		
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
			
		// the student average	
			
			cout<< " " <<endl;
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
			
		
		// The Constructor
		
			StudentGrades(string a_name, int a_math, int a_filipino, int a_english, int a_pe, int a_science, int a_nts, int a_oop, int a_literature, 
			int a_physics, int a_hci){
				
				name = a_name;
				math = a_math;
				filipino = a_filipino;
				english = a_english;
				pe = a_pe;
				science = a_science;
				nts = a_nts;
				oop = a_oop;
				literature = a_literature;
				physics = a_physics;
				hci = a_hci;	
				}		
				
		
		
		
};

int main(){
	
	string stud_name;
	int sub_math, sub_filipino, sub_english, sub_science, sub_pe, sub_nts, sub_oop, sub_literature, sub_physics, sub_hci;
	
	int name_count = 0;
	int stud_num = 1;
	
	
	
	
	while (name_count != 10){
	
		cout<< "Student NO." << stud_num << " \nEnter your name: " <<endl;
		cin>>stud_name;
			name_count++;
			stud_num++;
		cout<< " " <<endl;	
				
			
		// This area where student  enter their grades	
			
		cout<< "Math: " ;
		cin>>sub_math;
		cout<< "Filipino: " ;
		cin>>sub_filipino;
		cout<< "English: " ;
		cin>>sub_english;
		cout<< "P.E.: " ;
		cin>>sub_pe;
		cout<< "Science: " ;
		cin>>sub_science;
		cout<< "NTS: " ;
		cin>>sub_nts;
		cout<< "OOP: " ;
		cin>>sub_oop;
		cout<< "Literature: " ;
		cin>>sub_literature;
		cout<< "Physics: " ;
		cin>>sub_physics;
		cout<< "HCI: " ;
		cin>>sub_hci;
		cout<< " " <<endl;
		
	
		StudentGrades student = StudentGrades( stud_name, sub_math, sub_filipino, sub_english, sub_pe, sub_science, sub_nts, sub_oop, 
		sub_literature, sub_physics, sub_hci);
		
		
		
		student.sum = sub_math + sub_filipino + sub_english + sub_science + sub_pe + sub_nts + sub_oop + sub_literature + sub_physics + sub_hci;
		student.average = student.sum / 10;
		
		student.StudentGradeDisplay();
		
	//	return 0; 
		
		
}
}

