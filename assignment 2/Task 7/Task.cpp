#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "Guess a number: ";
	cin >> number;
	if (number == 45) {
		cout << "Correct!" << endl;
	}
	else { cout << "Incorrect!" << endl; }
	return 0;
}