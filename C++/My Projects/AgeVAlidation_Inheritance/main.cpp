#include "Base.h"
#include "Derived.h"
int main(){
	Derived obj;
	
	int YAge;
	string YName, YMail;
	
	obj.Title();

	cout << " \n Enter your name: ";
	cin >> YName;
	
	cout << " Enter your age: ";
	cin >> YAge;
	
	cout << " Enter yoour email: ";
	cin >> YMail;
	
	obj.setName(YName);
	obj.setAge(YAge);
	obj.setMail(YMail);
	
	obj.DisplayValidate(obj.getName(), obj.getAge());	
	
	
}
