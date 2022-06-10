#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Products{
			
	public:
		
		
		void Product_display(){
				
			int sum, sum_more, total, i;
			int apple = 25, banana = 5, orange = 30, pineapple = 60;
			string product_buy;
			int quantity;
			string buy, buy_more;
									
		

			while (buy != "x"){
				
				cout << " Enter a [ y ] if you want to buy and [ x ] if not " <<endl; 
				cout << " Buy a product?: ";
				cin >> buy;
				cout <<endl;
	
				while (buy != "y" && buy != "x"){
				
					cout << " INVALID INPUT " <<endl;
					cout <<endl;
					
					cout << " Enter a [ y ] if you want to buy and [ x ] if not " <<endl; 
					cout << " Buy a product?: ";
					cin >> buy;
					cout <<endl;
				}
					
				// if buy want to quit
				if(buy == "x"){
					
					cout <<endl;					
					cout << "-------- THANKS ---------------------------------------------- \n"
						 << "---------------- FOR ----------------------------------------- \n"
		 				 << "--------------------- COMING ---------------------------------- \n"
						 <<endl;
							 
					exit(0);
				}
				
					cout << " Enter [ a ] for apple ( $ 25 per piece ) " <<endl;
					cout << " Enter [ o ] for orange ( $ 30 per piece ) " <<endl;
					cout << " Enter [ b ] for apple ( $ 5 per piece ) " <<endl;
					cout << " Enter [ p ] for apple ( $ 60 per piece ) " <<endl;
					cout <<endl;
			
				while (buy_more != "x"){
					
						i++;
				
					// if the user say y the rpoduct will display 				
					if (buy == "y"){
								
						cout << " What do you want to buy [ a, o, b, or p]: ";
						cin >> product_buy;	
						
						while(product_buy != "a" && product_buy != "o" && product_buy != "b" && product_buy != "p"){
					
							if (product_buy != "a" && product_buy != "o" && product_buy != "b" && product_buy != "p"){
									
								cout << " INVALID INPUT " <<endl;
								cout <<endl;
								
								cout << " What do you want to buy [ a, o, b, or p]: ";
								cin >> product_buy;				
							}
						} //end of while loop
		
						cout << " Enter a quantity: ";
						cin >> quantity;
						cout <<endl;
							
						cout << " Buy more?: ";
						cin >> buy_more;
						
							
					
						
						// if user enter wrong input in buy more
						while(buy_more != "y" && buy_more != "x"){
							
							cout << " Invalid Input !!" <<endl;
							cout << endl;
							cout << " Buy more?: ";
							cin >> buy_more;
							
						}
						
						// if customer decide to stop buy more	
			/*			if (buy_more == "x"){
							
							if (product_buy =="a"){
														
								sum = apple * quantity;
									
								cout <<endl;
								cout << " \tTotal Amount: " << sum <<endl;
							}
								
							else if(product_buy == "o"){
									
								sum = orange * quantity;
									
								cout <<endl;
								cout << " \tTotal Amount: " << sum <<endl;
							}
							
							else if (product_buy == "b"){
								
								sum = banana * quantity;
								
								cout <<endl;
								cout << " \tTotal Amount: " << sum <<endl;
							}
								
							else{
								sum = pineapple * quantity;
								cout <<endl;
								cout << " \tTotal Amount: " << sum <<endl;
							}	
						
							exit(0);
								
						} // end of buy more = x
					*/
									
					} // end of if buy more = y
					
					// if customer dont want to add/buy more
					if (buy_more == "x"){
					
						if (product_buy =="a"){
												
							sum = apple * quantity;
						
													
						}
						
						else if(product_buy == "o"){
							
							sum = orange * quantity;
							
						}
						
						else if (product_buy == "b"){
							
							sum = banana * quantity;
							
						}
						
						else{
							sum = pineapple * quantity;
						
						}	
						
						sum = sum + sum;
						cout <<endl;
						cout << " \tTotal Amount: " << sum <<endl;
						exit(0);
						
					} 
						
				} // end of buy more while
											
				} // while buy
				
		} // end of void

	}; // endl of class
	
	

int main(){
		
	Products sell;

	sell.Product_display();
	
	return 0;

} // main function 

