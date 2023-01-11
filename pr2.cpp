#include <iostream>

using namespace std;

int main() {
	int a,b, c,d, s,t,u;

	do {
	cout << "Enter a,b: ";
	cin >> a; //d1 X
	cin >> b; //d1 Y

	cout << endl << "Enter c,d: ";
	cin >> c; //d2 X
	cin >> d; //d2 Y
	} while (a == c && b == d);

	do {
	cout << endl << "Enter s,t,u: ";
	cin >> s;
	cin >> t;
	cin >> u;} while (s==0 && s==t);

	bool Rside = false; //Is on rgiht side?
	bool result;
	//1st dot
	if (t == 0) {
		Rside = (a > -u/s);
		result = (Rside == (c > -u/s));
	} else if (s == 0) {
		Rside = (b > -u/t);
		result = (Rside == (d > -u/t));
	} else {
		Rside = (a > (-t*b-u)/s);
		result = (Rside == (c > (-t*d-u)/s));
	};
	if (result) cout << "both are on the same side"; else cout << "both aren't on the same side";
	cout << endl;
}
