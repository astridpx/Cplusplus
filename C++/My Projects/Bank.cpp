#include <iostream>
// #include <>


using namespace std;

class atm{
	
	public:
		
		int deposit, balance = 100, withdraw, choice;
			
		void display_choice(){
			
			cout << " Enter your choice: " <<endl;
			cout <<endl;
			cout << " \t 1. Check Balance \n"
				 << " \t 2. Deposit Money \n"
				 << " \t 3. Withdraw Money \n"
				 << " \t 4. Quit \n"
				 <<endl;
			//cout <<endl;
			
			cout << " Choice: ";
			cin >> choice;
	
			while (choice){
				
				if (choice == 1){
					
					cout <<endl;
					cout << " Your current balance: $ " << balance <<endl;
				}
				else if (choice == 2){
					
					cout <<endl;
					cout << " \t Enter your deposit: $ ";
					cin >> deposit;
					
					balance = balance + deposit;
					
					cout << endl;
					cout << " \t Your money deposit is successful " <<endl;
					cout <<endl;
					
					cout << " Your total balance: $ " << balance <<endl;
				}
				
				else if (choice == 3){
					
					cout <<endl;
					cout << " \t How much you wan to withdraw: $ " ;
					cin >> withdraw;		
				
					// if user withdraw  > his/her balance
					if (withdraw > balance){
						
						cout <<endl;
						cout << " \t Sorry, but you can't do that you have only : $ " << balance <<endl;
						
						// TRy to withdraw again
						cout <<endl;
						cout << " \t How much you want to withdraw: $ " ;
						cin >> withdraw;
						
						if (withdraw < balance){
							
							balance = balance - withdraw;
							
							cout <<endl;
							cout << " \t Withdrawal is successful !! " <<endl;
							cout <<endl;
							
							cout << " Your balance: $ " << balance <<endl;
						}	
					}
					
					// withdrawal is successfull if he/she withraw < balance
					else if (withdraw < balance){
						
						balance = balance - withdraw;
						
						cout <<endl;
						cout << " \t Withdrawal is successful !! " <<endl;
						cout <<endl;
						
						cout << " Your balance: $ " << balance <<endl;
					}	
				}
				
				else if (choice == 4){
					
					cout <<endl;					
					cout << "-------- THANKS ---------------------------------------------- \n"
						 << "---------------- FOR ----------------------------------------- \n"
		 				 << "--------------------- USING ---------------------------------- \n"
						 << "---------------------------- OUR ----------------------------- \n"
						 << "--------------------------------- BANK ----------------------- \n"
						 <<endl;
					
					exit(0);		
					}
				
				// if user enter a unknown number	
				else {
					
					cout <<endl;	
					cout << " \t INVALID INPUT !!! " <<endl;
					cout << endl;
					
					cout << " Choice: ";
					cin >> choice;
				}
				
				
				// to loop again 
				cout <<endl;
				cout << " Choice: ";
				cin >> choice;
				
		} // end of while choice
			
			
			
	} // end of void
	
	
};



int main(){
	
	atm obj;
	
	cout << "------ WELCOME ---------------------------------------------- \n"
		 << "---------------- TO ----------------------------------------- \n"
		 << "--------------------- OUR ----------------------------------- \n"
		 << "---------------------------- BANK --------------------------- \n"
		 <<endl;
		 
	
	obj.display_choice();
	
	
	return 0;
}





