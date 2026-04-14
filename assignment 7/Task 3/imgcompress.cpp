#include <iostream>
using namespace std;

int main() {
	int two_D[2][2];
	int linear[4];

	cout << "Enter the values: " << endl;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Rows " << i + 1 << ", Columns " << j + 1 << ": ";
			cin >> two_D[i][j];
		}
	}
	
	cout << "\n2D representation: " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << two_D[i][j] << " ";
		}
		cout << endl;
	}

	int k = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			linear[k] = two_D[i][j];
			k++;
		}
	}
	cout << "\nLinear representation: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << linear[i] << " ";
	}
	return 0;
}