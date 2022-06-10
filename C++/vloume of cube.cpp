#include <iostream>
using namespace std;

    int main()
    {
    	int sid1;
    	float volcu;
		cout << "\n\n Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the side of a cube : ";
    	cin>>sid1;
    	volcu=(sid1*sid1*sid1);
        cout<<" The volume of a cube is : "<< volcu << endl;
        cout << endl;
        
        
 
	    float kmph, miph;
		cout << "\n\n Convert kilometers per hour to miles per hour :\n";
		cout << "----------------------------------------------------\n";	
	    cout << " Input the distance in kilometer : ";
	    cin >> kmph;
		miph = (kmph * 0.6213712); 
	    cout << " The "<< kmph <<" Km./hr. means "<< miph << " Miles/hr." << endl;
		cout << endl;
    }

    
