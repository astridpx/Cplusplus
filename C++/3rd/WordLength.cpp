#include <iostream>
#include <string>

using namespace std;

class StringLength{
	public:
		string word;
		
		void Display(){
			
//			cout << " Enter a word: ";
//			getline(cin, word);
//			
//			
//			cout << "\n" << " The length of a word enter: " << word.length() <<endl;
//			}
			int len = 0;
			
			string Input;
			
			cout << " Enter a word: ";
			getline(cin, Input);
			
			for (int x = 0; x < Input.length(); x++) {
			    if (Input[x] != ' ') {
			        len++;
			    }
			}
			
			cout << len;
	}
		
		
};



int main(){
	
	StringLength obj;
	
	obj.Display();
	return 0;
}
