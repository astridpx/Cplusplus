#ifndef SALARY_H
#define SALARY_H
#include <iostream>
#include <string>

using namespace std;

class Salary
{
	public:
		void Salary_display();
		
	private:
		// variables [array] for client information
		string client_name[10], client_company[10], client_position[10];
		int client_salary[10];
		
		// variables for salary computation
		double hour, daily, weekly, monthly, annually;
};

#endif
