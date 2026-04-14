#include <iostream>
#include <string>

using namespace std;

int main() {
	int dep; string name; int salary; string desig; 

	cout << "Enter the number of departments: ";
	cin >> dep;

	for (int i = 1; i <= dep; i++) {
		int total = 0;
		cout << "\nEmployees of department " << i << endl;
		for (int j = 1; j <= 4; j++) {
			cout << "\nEnter the name of employee " << j << ": ";
			cin >> name;
			cout << "\nEnter the salary of employee " << j << ": ";
			cin >> salary;
			cout << "\nEnter the designation of employee " << j << ": ";
			cin >> desig;

			cout << "\nDetails of employee " << j << ": " << endl;
			cout << "\nName: " << name;
			cout << "\nSalary: " << salary;
			cout << "\nDesignation: " << desig;
			cout << "\n";
			
			total += salary;
		}
		cout << "\nTotal salary of all employees in department " << i << " = " << total << endl;
	}
	return 0;
}