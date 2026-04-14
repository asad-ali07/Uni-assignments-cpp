#include <iostream>
using namespace std;

int main() {
	int num; int sum = 0; int j;
	
	cout << "Please enter 10 integers, one at a time:" << endl;

	for (int i = 1; i <= 10; i++) {
		cout << "\nEnter integer " << i << ": ";
		cin >> num;
		for (j = 2; j < num; j++) {
			if (num % j == 0) {
				break;
			}
		}
		if (j == num && num > 1) {
		sum += num;
		}
	}
	
	cout << "\nSum of the prime numbers is: " << sum << endl;
	return 0;
}