#include "Calculator.h"
#include "DerivedCalcu.h"

int main(){
	DerivedCalcu obj;
	int Fnum;
	int Snum;
	char OP;
	
	cout << " Enter the first number: ";
	cin >> Fnum;
	
	cout << " \n Choose Operator [ '+' , '-' , '/' , '*' ] : ";
	cin >> OP;
	
	cout << " \n Enter second number: ";
	cin >> Snum;
	
	obj.setnum1(Fnum);
	obj.setOperator(OP);
	obj.setnum2(Snum);
	
	obj.DisplayResult(obj.getnum1(), obj.getnum2(), obj.getOperator());
	return 0;
}
