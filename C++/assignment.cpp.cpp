#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, num3, num4, num5;
	int ans, com1, com2;
	char ope;
	
	
cout<< "Enter a five numbers: \n";
	cin>>num1>>num2>>num3>>num4>>num5;
	
cout<<" Enter a operator: ";
	cin>>ope;
	
cout<<" Enter two numbers from number you entered: \n";
	cin>>com1>>com2;
	
if(ope == '+'){
	ans = com1 + com2;
	cout<<ans;
}

else if(ope == '-'){
	ans = com1 + com2;
	cout<<ans;
} 	

else if(ope == '*'){
	ans = com1 * com2;
	cout<<ans;
}
	
else if(ope == '/'){
	ans = com1 / com2;
	cout<<ans;
}

else
{
cout<<"Invalid input!!";	
}


return 0;	
}




