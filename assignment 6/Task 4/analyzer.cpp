#include <iostream>
using namespace std;

int main() {
	int array[8] = { 0 };
	bool has_zero;
	do {
		cout << "Enter array elements (enter '0' to terminate input): " << endl;

		for (int i = 0; i < 8; i++) {
			has_zero = true;
			cin >> array[i];
			if (array[i] == 0) {
				has_zero = false;
				break;
			}
			else continue;
		}
	} while (!has_zero);

	cout << "Array with zero values: ";
	for (int i = 0; i < 8; i++) {
		cout << array[i] << " ";
	}
	
	return 0;
}