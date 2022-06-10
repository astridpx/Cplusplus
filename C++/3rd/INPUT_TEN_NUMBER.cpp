#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Numbers{
	public:
		int number[10];
	
	void DisplayNum(){
		
		for (int i = 0; i <= 9; i++){
			cout << i+1 << " Enter a number: ";
			cin >> number[i];
		}
		// this is for even numbers
		cout <<endl;
		cout << " The even numbers are: " <<endl;
		for(int x = 0; x <= 9; x++){
			if( number[x] % 2 == 0){
				cout << number[x] <<endl;
			}
		}
		// this is for odd numbers
		cout <<endl;
		cout << " The odd numbers are: " <<endl;
		for(int a = 0;  a <= 9; a++){
			if(number[a]){
				cout << number[a] <<endl;
			}
		}
	}
	
};



int main(){
	Numbers num;
	
	num.DisplayNum();
	
	return 0;
}
