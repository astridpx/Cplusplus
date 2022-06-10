#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Numbers{
	public:
		int number;
	
	void DisplayNum(){
		
		cout << " Enter any number: ";
		cin >> number;
		
		if (number % 2 == 0){
			
			cout << " \nYou enter an even number " <<endl;
		}
		else{
			cout << " \nYou enter an odd number " <<endl;
		}
		
		
	}
	
};



int main(){
	Numbers num;
	
	num.DisplayNum();
	
	return 0;
}
