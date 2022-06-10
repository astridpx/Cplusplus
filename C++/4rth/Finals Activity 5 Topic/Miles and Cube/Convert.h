#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>

using namespace std;

class Convert
{
	public:
		void Display_Choose();
		void Display_Miles();
		void Display_Cube();
		
	private:
		float kmph, mph; // for Miles covnvertion
		int side;
    	float volume;
    	char choose;
};

#endif
