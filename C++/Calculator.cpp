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
		int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
		
	public:
	//	void DisplayResult();
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



class DerivedCalcu : public Calculator {
	public:
		void setsum(int Sum){
			sum = Sum;			
		}
		void setsum1(int Sum1){
			sum1 = Sum1;			
		}
		void setsum2(int Sum2){
			sum2 = Sum2;			
		}
		void setsum3(int Sum3){
			sum3 = Sum3;			
		}
		
		void DisplayResult(int fnum, int snum, char Operator1){
			
			cout << " \n Problem : " << fnum << Operator1 << snum << endl;		
			if(Operator1 == '-'){
				sum = fnum - snum;
				cout << " Sum: " << sum << endl;
			}
			else if(Operator1 == '+'){
				sum1 = fnum + snum;
				cout << " Sum: " << sum1 << endl;
			}
			else if(Operator1 == '*'){
				sum2= fnum * snum;
				cout << " Sum: " << sum2 << endl;
			}
			else if(Operator1 == '/'){
				sum3 = fnum / snum;
				cout << " Sum: " << sum3 << endl;
			}
			// Dispkay the Total
			
		}
};


int main(){
	DerivedCalcu obj;
	int Fnum;
	int Snum;
	char OP;
	
	cout << " Enter the first number: ";
	cin >> Fnum;
	
	cout << " \n Choose Operator [ + , - , / , * ] : ";
	cin >> OP;
	
	cout << " \n Enter second number: ";
	cin >> Snum;
	
	obj.setnum1(Fnum);
	obj.setOperator(OP);
	obj.setnum2(Snum);
	
	obj.DisplayResult(obj.getnum1(), obj.getnum2(), obj.getOperator( ));
	return 0;
}
