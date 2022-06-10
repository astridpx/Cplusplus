#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <Windows.h>

using namespace std;

class purchase{
	
	public:
		char choice, purchaseProd;
		int prodQuantity1 = 0, prodQuantity2 = 0, prodQuantity3 = 0, prodQuantity4 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sumA111 = 0, sumA112 = 0; 
		int sumA113 = 0, sumA114 = 0;
		
			void displayTitle(){
				cout << " ===================================================== \n"
					 << "      		 ISMAEL FRUIT STORE                  \n"
					 <<	" ===================================================== \n"
					 <<endl;
					}
			void displayExit(){
				cout << " ************************************************** \n"
					 << "        THANKS FOR BUYING. HAVE A GOOD DAY          \n"
					 << " ************************************************** \n"
					 <<endl;
				}
		
			void displayProdlist(){
				
				cout << " List of Products : " <<endl;
				cout << " \n\tEnter a for Apple ( $ 25 per piece ) - " <<sumA111 <<endl;
				cout << " \tEnter o for Orange ( $ 30 per piece ) - " <<sumA112 <<endl; 
 				cout << " \tEnter b for Banana ( $ 5 per piece ) - " <<sumA113 <<endl;
 				cout << " \tEnter p for Pineapple ( $ 60 per piece ) - " <<sumA114 <<endl;
					
			}		
			
			float choiceProdlist(){
				do{	
				
					while((choice != 'y') || (choice != 'Y') || (choice != 'x') || (choice != 'X')){
						cout << " \nDo you want to add more? ( y or x ) : ";
						cin >> choice;
												
						if((choice == 'x') || (choice == 'X')){
							system("cls");
							cout << " Computing price... " << endl;
							Sleep(3000);
							system("cls");
							
							displayTitle();
							
							// This will displauy the total amount of user buyed and pieces of item buyed
							cout << " \nProduct purchase: "
								 << "\n\t" << sumA111 << " Apple ( $ 25 per piece ) " 
								 << "\n\t" << sumA112 << " Orange ( $ 30 per piece ) " 
								 << "\n\t" << sumA113 << " Banana ( $  5 per piece ) " 
								 << "\n\t" << sumA114 << " Pineapple ( $ 60 per piece ) "
								 <<endl;
								 
							
							cout << " \nTotal Price: $ " << sum1 + sum2 + sum3 + sum4 <<endl;
							cout <<endl;
							displayExit();
							exit(0);
						}
						else if((choice == 'y') || (choice == 'Y')){
							system("cls");
							displayProdlist();										
					
							cout << " \nWhat do you want to buy (a, o, b, or p) : ";
							cin >> purchaseProd;
								
								if ((purchaseProd == 'a') || (purchaseProd == 'A')){
									cout << "Enter the quantity: ";

									while(!(cin >> prodQuantity1)){
										cout << " \nERROR " <<endl;
										cout << " A quantity must be a number !! " <<endl;
										
										cout << " \nEnter the quantity: ";
										cin >> prodQuantity1;
										cin.clear();
										cin.ignore(numeric_limits <streamsize> :: max(), '\n');		
									}
									system("cls");
									sumA111 = sumA111 + prodQuantity1;
									sum1 = sumA111 * 25;
								}
								else if((purchaseProd == 'o') || (purchaseProd == 'O')){
									cout << "Enter the quantity: ";
									
									while(!(cin >> prodQuantity2)){
										cout << " \n ERROR " <<endl;
										cout << " A quantity must be a number !! " <<endl;
										
										cout << " \nEnter the quantity: ";
										cin >> prodQuantity2;
										cin.clear();
										cin.ignore(numeric_limits <streamsize> :: max(), '\n');		
									}
									sumA112 = sumA112 + prodQuantity2;
									sum2 = sumA112 * 30;
								}
								else if ((purchaseProd == 'b') || (purchaseProd == 'B')){
									cout << "Enter the quantity: ";
								
									while(!(cin >> prodQuantity3)){
										cout << " \n ERROR " <<endl;
										cout << " A quantity must be a number !! " <<endl;
										
										cout << " \nEnter the quantity: ";
										cin >> prodQuantity3;
										cin.clear();
										cin.ignore(numeric_limits <streamsize> :: max(), '\n');		
									}
									sumA113 = sumA113 + prodQuantity3;
									sum3 = sumA113 * 5;
								}
								else if((purchaseProd == 'p') || (purchaseProd == 'P')){
									cout << "Enter the quantity: ";
									
									while(!(cin >> prodQuantity4)){
										cout << " \n ERROR " <<endl;
										cout << " A quantity must be a number !! " <<endl;
										
										cout << " \nEnter the quantity: ";
										cin >> prodQuantity4;
										cin.clear();
										cin.ignore(numeric_limits <streamsize> :: max(), '\n');		
									}
									sumA114 = sumA114 + prodQuantity4;
									sum4 = sumA114 * 60;
								}
								else{ 
									cout << " \n Invalid Input " <<endl;
									cout << " You enter unknown character. " <<endl;
								}
								
								
							}else{ // else choice
								
								cout << " \nInvalid Input " <<endl;
							}
						} //while
						
				}while((choice == 'y') || (choice == 'Y'));

			} // prodlist
			
				
//			void findDisplay(){
//				system("cls");
//				displayProdlist();
//				cout << " \nProduct purchase: " << sumA111 << " Apple ( $ 25 per piece ) " << sumA112 << " Orange ( $ 30 per piece ) " << "\n" << 
//				sumA113 << " Banana ( $  5 per piece ) " << sumA114 << " Pineapple ( $ 60 per piece ) "<<endl;
//				
//				cout << " \nTotal Price: $ " << sum1 + sum2 + sum3 + sum4 <<endl;
//			}
	
};

int main(){
	
	purchase obj;
	
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





