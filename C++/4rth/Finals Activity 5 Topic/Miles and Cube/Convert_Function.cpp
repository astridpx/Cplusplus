#include "Convert.h"
char play_again;

void Convert::Display_Choose(){
	
	do{		
		cout << "  \n 1. Calculate Volume Of Cube \n"
			 << " 2. Convert Kilometer per hour to Miles per hour "
			 <<endl;
		
		cout << " \n Enter your choose: ";
		cin >> choose;

		if(choose == '1'){
			system("cls");
			Display_Cube();
		} 
		else if(choose == '2'){
			system("cls");
			Display_Miles();
		}
		else{
			cout <<" \n Invalid Input!! " <<endl;
			cout << " \n Enter your choose: ";
			cin >> choose;
		}

		cout << " \n Play Again [y] or [x]?: ";
		cin >> play_again;
		system("cls");
	
	}while(play_again == 'y');
}

void Convert::Display_Cube(){
	
		
		cout << "\n Calculate the volume of a cube :\n"
			 << "---------------------------------------\n"
			 <<endl;
			 		
        cout<<" Input the side of a cube : ";
    	cin>>side;
    	
    	volume=(side*side*side);
        cout<<" The volume of a cube is : "<< volume << endl;
}

void Convert::Display_Miles(){
	
		cout << "\n Convert kilometers per hour to miles per hour :\n"
			 << "----------------------------------------------------\n"
			 <<endl;
			 	
	    cout << " Input the distance in kilometer : ";
	    cin >> kmph;
	    
		mph = (kmph * 0.6213712); 
	    cout << " The "<< kmph <<" Km./hr. in miles is "<< mph << " Miles/hr." << endl;
}
