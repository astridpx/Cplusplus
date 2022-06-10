#include <iostream>

using namespace std;

class Base{
	private:
		string name;
		int age;
		
	protected:
		string email;
	public:
		void Title(){
			cout << " Election age Validation " <<endl;
		}
		
	
		void setAge(int ages){
			age = ages;
		}
		int getAge(){
			return age;
		}
		
		void setName(string names){
			name = names;
		}
		string getName(){
			return name;
		}
};

class Derived : public Base{
	public:
		void setMail(string mail){
			email = mail;
		}
		
		void DisplayValidate(string Name, int Age){
		
			cout << " \n Hello " << Name <<endl;
			
			if(Age < 18){
				cout << " \nSorry You're not able to vote " <<endl;
			}
			else if((Age >= 18) && (Age < 60)){
				cout << " \nYou're able to vote " <<endl;
			}
			else if(Age >= 60){
				cout << " \nYou're a senior. You can use the reserved room for senior to vote eassy " <<endl;
			}
			else{
				cout << " \nYou're age is invalid " << endl;
			}
			
			cout << " \nHi " << Name << " We will send you the exact date of voting in your email " << email <<endl;
		}
	
	
};

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
