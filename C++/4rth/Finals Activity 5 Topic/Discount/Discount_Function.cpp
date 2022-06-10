#include "Discount.h"

void Discount::Display_Item(){
	cout << " Enter your name: ";
	getline(cin, customer);
	
	cout << " Enter your age: ";
	cin >> age;	
	system("cls");
	
	cout << " \n\t1. Pares ---------------------- $ 25"
		 << " \n\t2. Mami ----------------------- $ 20 "
		 << " \n\t3. Lomi ----------------------- $ 30 "
		 << endl;
	
	cout << " \n Select an Item: ";
	cin >> buy;

	if(age < 60){
		cout << " Regular Customer: " <<endl;
		
		if(buy == '1'){
			amount =+ 25;
		}
		else if (buy == '2'){
			amount =+ 20;	
		}
		else if(buy == '3'){
			amount =+ 30;
		}
		
		cout << " \n\t Price: $ " << amount <<endl;
	}
	else if(age >= 60){
		cout << " Senior Customer: " << endl;
		cout << " \n You have 10% discount " <<endl;
		
		if(buy == '1'){
			sr_amount =+ 25;
			sr_amount1 = sr_amount * .10;
			cout << " \n\t Price: $ " << sr_amount1 <<endl;
		}
		else if (buy == '2'){
			sr_amount =+ 20;
			sr_amount2 = sr_amount * .10;
			cout << " \n\t Price: $ " << sr_amount2 <<endl;
		}
		else if(buy == '3'){
			sr_amount =+ 30;
			sr_amount3 = sr_amount * .10;
			cout << " \n\t Price: $ " << sr_amount3 <<endl;
		}
		
	}
	 
	
		
}











