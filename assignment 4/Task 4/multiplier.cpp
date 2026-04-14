#include <iostream>
using namespace std;

int main() {
	int table; int num = 1;

	cout << "Enter a number to see it's multiplication table: ";
	cin >> table;

	cout << "Multiplication table for " << table << ": " << endl;

	do {
		int total = table * num;

		cout << table << " * " << num << " = " << total << endl;
		num++;
	} while (num <= 10);
	return 0;
}