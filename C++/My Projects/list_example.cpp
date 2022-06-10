#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> my_list = [ 12, 5, 10, 9 ];

	for (int x : my_list) {
		cout << x << '\n';
	}
}
