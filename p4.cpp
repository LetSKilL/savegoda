#include <iostream>

using namespace std;

void sortArray(int* arra) {
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 9; k++) {
			if (arra[k] < arra[k+1]) {
				temp = arra[k];
				arra[k] = arra[k+1];
				arra[k+1] = temp;
			}
		}
	}
}

void printArray(int* arra) {
	for (int i = 0; i < 9; i++) {
		cout << arra[i] << " ";
	}
}

int main () {
	int pick, arr[10];
	
	do {
	cout << "Do you want to enter an array manually (1 - yes, 2 - no)?";
	cin >> pick;
	} while (pick != 2 && pick != 1);

	if (pick == 1) {
		for (int i = 0; i < 10; i++) {
			cout << endl << "Enter " << i+1 << "st number:";
			cin >> arr[i];
		}
	} else {
		for (int i = 0; i < 10; i++) {
			arr[i] = rand()%100;
		}
	}

	sortArray(arr);
	printArray(arr);
}
