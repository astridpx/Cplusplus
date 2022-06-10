#ifndef EXAM_H
#define EXAM_H
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Exam
{
	public:
		void Quest_display();
		
	private:
		char take;
		int score = 0;
		char q[50];
		char answer[50] = {'c', 'a', 'b', 'a', 'b', 'b', 'c', 'a','c','c', 'a', 'a', 'a', 'c', 'c', 'c', 'c', 'c', 'b', 'b', 'a', 'b', 'b', 'a', 'a', 'b', 'c','c', 'b', 'a',
		 'c', 'a', 'a', 'b', 'a', 'c', 'a', 'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a', 'a'};
};

#endif
