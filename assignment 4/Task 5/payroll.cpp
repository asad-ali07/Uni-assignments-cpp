#include <iostream>
using namespace std;

int main() {
	int employee; int wage; int hours;
	cout << "Welcome to the employee payroll calculator! " << endl;
	cout << "\nEnter the number of employees: ";
	cin >> employee;

	for (int i = 1; i <= employee; i++) {
		cout << "\nEmployee " << i << ": " << endl;

		cout << "\nEnter hourly wage: ";
		cin >> wage;

		cout << "\nEnter hours worked: ";
		cin >> hours;

		int pay = hours * wage;

		cout << "\n The weekly payroll of Employee " << i << " is: $" << pay << endl;
	}
	return 0;
}