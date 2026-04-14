#include <iostream>
#include <string>
using namespace std;

int main() {
	int period = 6; int day = 1; string subject;

	cout << "Enter number of days: ";
	cin >> day;

	for (int i = 1; i <= day; i++) {
		cout << "\nEnter subjects for day " << i << ": \n";

		for (int j = 1; j <= period; j++) {
			cout << "\nPeriod " << j << ": ";
			cin >> subject;
			cout << "\nDay " << i << ", Period " << j << ": " << subject << endl;
			cout << "\n";
		}
	}
	return 0;
}