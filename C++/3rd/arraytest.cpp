#include <iostream>

using namespace std;

int main(){
	
	
	
	int arr1[5] ={1, 2, 3, 4, 5,};
	int arr2[5] ={5, 2, 3, 6, 5,};
	int match = 0, s = 1 ,v;
	
	for (int x = 0; x <= 5; x++){
	
			
			if (arr1[x] == arr2[x]){
				
				cout << " Correct " << match++ << " : " << arr1[x]<<endl;
			}
			
			else{
				
				cout << " Wrong " << arr1[x] <<endl;
			}

			
		
		
		
	}
}
