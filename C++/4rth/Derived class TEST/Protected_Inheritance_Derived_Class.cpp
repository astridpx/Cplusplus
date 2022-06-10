#include <iostream>

using namespace std;

class Base{
	private:
		int pvt = 1;
		
	protected:
		int prot =2;
	
	public:
		int pub = 3;
	
	// function to access private members
	int getPVT(){
		return pvt;
	}
};


class protectedDerived : protected Base{
	public:
	//function to access protected members
	int getProt(){
		return prot;
	}
	
	// function to access public members
	int getPub(){
		return pub;
	}
};

int main(){
	protectedDerived obj;
	
	cout << " Private cannot be accesses "<<endl;
	cout << " Protected = " << obj.getProt() <<endl;
	cout << " Public = " << obj.getPub() <<endl; 
	
	return 0;
}
