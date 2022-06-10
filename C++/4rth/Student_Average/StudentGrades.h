#ifndef STUDENTGRADES_H
#define STUDENTGRADES_H
#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;

class StudentGrades{
	private:
		
	public:
		double average, sum;
		string name;
		int math, filipino, english, pe, science, nts, oop, literature, physics, hci, stud;
		void StudentGradeDisplay();
		
};

#endif
