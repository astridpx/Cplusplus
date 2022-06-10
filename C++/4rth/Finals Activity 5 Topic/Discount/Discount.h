#ifndef DISCOUNT_H
#define DISCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class Discount
{
	public:
		void Customer_Info();
		void Display_Item();
	
	private:
		string customer;
		int age;
		char buy;
		int amount;
		int sr_amount, sr_amount1, sr_amount2, sr_amount3; 
	//	float discount = 0.10;
	
};

#endif

