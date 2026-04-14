#include <iostream>
using namespace std;

int main() {
	int age1; int age2; int age3;

	cout << "Enter the age of friend 1: ";
	cin >> age1;
	cout << "Enter the age of friend 2: ";
	cin >> age2;
	cout << "Enter the age of friend 3: ";
	cin >> age3;

	if (age1 < age2 && age1 < age3) {
		cout << "\nthe youngest friend is friend 1 with an age of " << age1 << " Years" << endl;
	}
	else if (age2 < age1 && age2 < age3) {
		cout << "\nthe youngest friend is friend 2 with an age of " << age2 << " Years" << endl;
	}
	else {
		cout << "\nthe youngest friend is friend 3 with an age of " << age3 << " Years" << endl;
	}
	return 0;
}