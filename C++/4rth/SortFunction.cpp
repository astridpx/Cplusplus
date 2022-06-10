#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Sort{
	public:
		int num;
		int arr[10];
		
	void DisplayInput(){
		for(int i = 0; i < 10; i++){
			cout << i+1 << ". Enter a number: ";
			cin >> arr[i];
		}
		// sorting an array
    	int num = sizeof(arr) / sizeof(arr[0]);
   		sort(arr, arr + num);
   		
   		// Display the sort array
		cout << " \nThe numbers entered after sorting: "; 
   		for(int x = 0; x < num; x++){
   			cout << arr[x] << endl;
		   }		
	}
	
};


int main(){
	Sort obj;
	
	obj.DisplayInput();
    return 0;
}
