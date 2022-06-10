#ifndef ATM_H
#define ATM_H
#include <iostream>
#include <Windows.h>
using namespace std;

class ATM
{
	public:
		void Display_ATM();
		void Title();
		void Exit();
	private:
		int balance = 100;
		int withdraw;
		int deposit;
		char action;
};

#endif
