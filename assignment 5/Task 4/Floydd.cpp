#include <iostream>
using namespace std;

int main() {
	int rows; int number = 1;
	cout << "Welcome to Floyd's triangle generator! " << endl;
	
	cout << "Enter the number of rows for Floyd's triangle: ";
	cin >> rows;

	cout << "Floyd's triangle: " << endl;
	
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			cout << number << " ";
			number++;
		}
		cout << endl;
	}
	return 0;
}