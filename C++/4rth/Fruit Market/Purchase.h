#ifndef PURCHASE_H
#define PURCHASE_H
#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <Windows.h>

using namespace std;

class Purchase{
	private:
		char choice, purchaseProd;
		int prodQuantity1 = 0, prodQuantity2 = 0, prodQuantity3 = 0, prodQuantity4 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sumA111 = 0, sumA112 = 0; 
		int sumA113 = 0, sumA114 = 0;
		
	public:
		void displayTitle();
		void displayExit();
		void displayProdlist();
		float choiceProdlist();
		
};

#endif
