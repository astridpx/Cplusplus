#include <iostream>
#include <ctype.h> // for isdigit()
#include <sstream> 
#include <limits>


using namespace std;

int main(){
	
	string user_num = ""; //user string num
	
	int num = 0, // is_num
	
	 decimal = 0, // decimal_count
	  user_convert;       // user_converted num
	
	bool y = 0; // is num bool
	bool x = true;
	
	while ( bool x = true){
	
	do{
		cout << " Enter a number: ";
		cin >> user_num;
		
			if (user_num [0] == '-')
			num++;
			
			if (user_num [0] == '0' && isdigit(user_num[1]) )
			num = 0;
			
			else{
				
				for (int i = 0; i < user_num.size(); i++){
					
					if (isdigit(user_num[i]))
						num++;
					
					if(user_num[i] == '.')
						decimal++;

				}
			}
			
			 if(decimal ==1 )
				num = 0;
				
			 if(num == user_num.size()){
			 	
			 	stringstream str_stream_object (user_num);
			 	str_stream_object >> user_convert;
			 	
			 	num = 1;
			 	
				cout << " Good Job "<<endl;
			 }
			 else{
			 	
			 	cout << " Invalid Input " <<endl;
			 	cout <<endl;
			 	
			 	cin.clear();
			 	cin.ignore(numeric_limits <streamsize> ::max(),'\n');
			 	
			 	num = 0;
			 	y = 0;
				decimal = 0;
		 }
		
	}while(y = 0);
	
	
}
	
	
	
	
	
	
	return 0;
	
}




