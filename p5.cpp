#include <iostream>

using namespace std;

void PrintDArray(int **arr, int size1, int size2) {
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int pick, size;

	cout << "Enter matrix size: ";
	cin >> size;

	int **arr;
	arr = new int *[size];
	
	do {
	cout << endl << "Do you want to enter an array manually (1 - yes, 2 - no)? ";
	cin >> pick;
	} while (pick != 2 && pick != 1);
	
	if (pick != 1) {
		for (int i = 0; i<size; i++) {
			arr[i] = new int[size];
			for (int k = 0; k<size; k++) {
				arr[i][k] = rand()%100;
			}
		}
	} else {
		for (int i = 0; i<size; i++) {
			arr[i] = new int[size];
			for (int k = 0; k<size; k++) {
				cout << "Enter [" << i << "][" << k << "]: ";
				cin >> arr[i][k];
			}
		}
	}

	cout << "Start array: " << endl;
	PrintDArray(arr, size, size);

	int temp;
	for (int i = 0; i < size; i++) {
		temp = arr[i][i];
		arr[i][i] = arr[i][size-i-1];
		arr[i][size-i-1] = temp;
	}

	cout << "Result array: " << endl;
	PrintDArray(arr, size, size);
}
