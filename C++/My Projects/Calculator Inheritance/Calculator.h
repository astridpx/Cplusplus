#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "DerivedCalcu.h"
#include <iostream>


using namespace std;

class Calculator
{
		
	private:
		int num1;
		int num2;
		char Operator;
	protected:
		string name;
		int sum;
		
	public:
		//void DisplayResult();
		
		void setnum1(int Num1){
			num1 = Num1;
		}
		int getnum1(){
			return num1;
		}
		void setnum2(int Num2){
			num2 = Num2;
		}
		int getnum2(){
			return num2;
		}
		void setOperator(char ope){
			Operator = ope;
		}
		char getOperator(){
			return Operator;
		}
};

#endif
