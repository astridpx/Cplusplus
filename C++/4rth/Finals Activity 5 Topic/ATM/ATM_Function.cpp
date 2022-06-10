#include "ATM.h"

void ATM::Display_ATM(){
	
	cout << " \t1. Check Balance \n"
		 << " \t2. Withdraw \n"
		 << " \t3. Deposit \n"
		 << " \t4. Quit "
		 << endl;
		 
	cout << " Action: ";
	cin >> action;
	
	if  (action == '1'){
		cout << " \nYour balance: $ " << balance << endl;
		cout << endl;
		Display_ATM();
	}
	else if(action == '2'){
		cout << " \nAmount to withdraw: $ ";
		cin >> withdraw;
			
		if ( withdraw > balance){
			cout << " \nSorry, you can't withdraw $ " << withdraw << ". You have only $ " << balance << endl;
			cout << endl;
			Display_ATM();
		}
		else if (withdraw <= balance){
			balance = balance - withdraw;
			
			cout << " \nYou Successfully Withdraw $ " << withdraw << endl;
			cout << " \nYour Balance: $ " << balance << endl;
			cout << endl;
			Display_ATM();
		}
	}
	else if(action == '3'){
		cout << " \nEnter Amount To Deposit: ";
		cin >> deposit;
		
		balance = balance + deposit;
		
		cout << " \nYou Successfully Deposit $ " << deposit << endl;
		cout << " \nYour balance: $ " << balance << endl;
		cout << endl;
		Display_ATM();
	}
	else if(action == '4'){
		system("cls");
		Exit();
		system("exit");
	}
}
	
void ATM::Title(){
	
	cout << " ===================================================== \n"
				 << "    Welcome To The International Bank          \n"
				 <<	" ===================================================== \n"
				 <<endl;
	}	
	
void ATM::Exit(){
	
	cout << " ===================================================== \n"
				 << "    Thanks For Using International Bank          \n"
				 <<	" ===================================================== \n"
				 <<endl;
	cout << " Shutting down..." <<endl;
	Sleep(3000);
	system("cls");
	}	
	
	
	
	
	
	
	
	
	
