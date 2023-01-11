#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string text_l;
	cout << "Enter text: ";
	getline(cin, text_l);

	char* char_a = new char[text_l.length() + 1];

	strcpy(char_a, text_l.c_str());

	int first = -1, second = -1;
	for (int i = 0; i < text_l.length(); i++) {
		if (char_a[i] == ',') {
			if (first == -1) {
				first = i;
			}
			second = i;
		}
	}

	cout << endl << "First: " << first+1 << " Last: " << second+1;
}
