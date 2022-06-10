#include "Exam.h"


int main(){
	
	Exam exam; // object
	
	string name;
	char start_exam;

		
	cout <<endl;
	cout << " MATH FINAL EXAMINATION " <<endl;
	cout << endl;
	
	
		
	cout << " Loading... " <<endl;
	Sleep(1000);
	
	
		cout <<endl;
		cout << " Enter [ y ] for yes and press [ x ] for No " <<endl;
		cout <<endl;
		
	while(start_exam != 'x' && start_exam != 'y' ){
		
		while(start_exam != 'x'){
				
			cout << " Do you want to start the exam?: ";
			cin >> start_exam;
			cout <<endl;	
			
			if(start_exam == 'x'){
				
				cout <<endl;
				cout << " \t Bye, Come again if you're ready to take exam!! " <<endl;
				
				exit(0);
			}
			
			else if(start_exam == 'y' ){
				
				system("cls");
				cout << " Enter your name: ";
				cin >> name;
				cout <<endl;
				
				exam.Quest_display();
				
				return 0;
				
			}
			else{
				cout << " INVALID INPUT " <<endl;
				cout <<endl;
			}
			
		} // inner while
		
	} // end of while
	
	
}



