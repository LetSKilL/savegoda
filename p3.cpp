#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n;

	int n1 = 0;
	int n2 = 1;
	int temp;
	cout << "0, 1";
	for (int i=0; i < n; i++) {
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		cout << ", " << n2;
	}
	cout << endl;
}
