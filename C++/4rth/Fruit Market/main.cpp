#include "Purchase.h"

int main(){
	
	Purchase obj;
	
	string enter;	
	
	obj.displayTitle();	
	while((enter != "y") && (enter != "x")){
		
		cout << " \nDo you want to buy ? [y] or [x] : ";
		cin >> enter;
		
		transform( enter.begin(), enter.end(), enter.begin(),:: tolower);	
	
	
		if(enter =="y"){
		 	
		 	system("cls");;
			obj.displayProdlist();
			obj.choiceProdlist();
//			obj.findDisplay();
			
		}else if(enter == "x"){
			system("cls");
			cout << " ************************************************** \n"
				 << " *      THANKS FOR COMMING. HAVE A GOOD DAY       * \n"
				 << " ************************************************** \n"
				<<endl;
			cout << " Shutting Down... " <<endl;
			Sleep(3000);
			system("cls");
			system("exit");
			
		}else{
			cout << " \nInvalid Input " <<endl;
		}
	}
	return 0;
}
