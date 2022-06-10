#include "Salary.h"

void Salary::Salary_display(){
				
			// for client number and client name 
			// it will loop until the user  enter 10 names
			// i + 1 to for the client to get the no. from 1-10
			for (int i = 0; i <= 9; i++){
			
				cout << " Client NO. [" << i + 1 << "] - Enter Your Name: ";
				getline (cin, client_name[i]); 
				
					// client other information
					cout <<endl;
					cout << "\t" << " Position: ";
					getline(cin, client_position[i]);
					cout <<endl;
					cout << "\t" << " Company: ";
					getline(cin, client_company[i]);
					cout <<endl; 
		
			} 
			
			// Getting the per hour salary of a client
			for (int s = 0; s <= 9; s++){
					
					cout <<endl;
					cout << "\t" << " Client No.[" << s + 1 << "]" << " " + client_name[s] << " Enter a Value: $ ";
					cin >> client_salary[s];
				
			}
				
				
			for (int d = 0; d <=9; d++){
				
				// computation of salary 
					daily = client_salary[d] * 8;
					weekly = client_salary[d] * 40;
					monthly = client_salary[d] * 160;
					annually = client_salary[d] * 1920;
					
					// display the client no and client anme
					// display the daily, weekly, monthly, and annually
						cout <<endl;
						cout << " Cient NO. " << d + 1 << " - " << client_name[d] <<endl;
						cout << " Position: "<< client_position[d] <<endl;
						cout << " Company: " << client_company[d] <<endl;
						cout <<endl;
						
						cout << "\t" << " Your Per Hour: $ "<< client_salary[d] <<endl;
						cout << "\t" << " Your Daily: $ " << daily <<endl;
						cout << "\t" << " Your Weekly: $ " << weekly <<endl;
						cout << "\t" << " Your Monthly: $ " << monthly <<endl;
						cout << "\t" << " Your Annually: $ " << annually <<endl;
						cout <<endl;
			}			
	}	
