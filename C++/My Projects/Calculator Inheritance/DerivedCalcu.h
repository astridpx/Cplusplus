#ifndef DERIVEDCALCU_H
#define DERIVEDCALCU_H
#include "Calculator.h"


class DerivedCalcu : public Calculator {
	public:
		void setsum(int Sum){
			sum = Sum;			
		}
		
		void DisplayResult(int fnum, int snum, char Operator1){
			
			cout << fnum << Operator1 << snum << endl;
			if(Operator1 == '+'){
				sum = fnum + snum;
				cout << " /nSum: " << sum << endl;
			}
			else if(Operator1 == '-'){
				sum = fnum - snum;
				cout << " /nSum: " << sum << endl;
			}
			else if(Operator1 == '*'){
				sum = fnum * snum;
				cout << " /nSum: " << sum << endl;
			}
			else if(Operator1 == '/'){
				sum = fnum / snum;
				cout << " /nSum: " << sum << endl;
			}
			// Dispkay the Total
		}
};

#endif
