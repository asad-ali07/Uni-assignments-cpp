#include <iostream>
using namespace std;

int main() {
	int choice; int size;
	cout << "Welcome to the star pattern generator!\n" << endl;
	cout << "Choose the type of star pattern: \n" << endl;
	cout << "1. Hollow stars\n2. Filled stars\n3. Pyramid Stars\n" << endl;
	
	cout << "Enter your choice: ";
	cin >> choice;

	cout << "Enter the size of the star pattern: ";
	cin >> size;

	cout << "\nFilled star pattern:\n " << endl;

	if (choice == 1) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				if (i == 1 || i == size || j == 1 || j == i)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
	else if (choice == 2) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
			cout << endl;
		}
	}
	else if (choice == 3) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size - i; j++) {
				cout << " ";
			}
			for (int k = 1; k <= 2 * i - 1; k++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}