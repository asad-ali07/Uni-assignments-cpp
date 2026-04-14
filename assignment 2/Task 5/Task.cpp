#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	string service;
	cout << "Service description = ";
	cin >> service;
	cout << "\n";

	int quantity;
	cout << "Quantity = ";
	cin >> quantity;
	cout << "\n";

	float fee;
	cout << "Service fee = ";
	cin >> fee;
	cout << "\n";

	float sub_total;
	sub_total = fee * quantity;
	cout << "\n";

	float tax;
	tax = sub_total * 0.05;
	cout << "\n";

	float total;
	total = sub_total + tax;
	cout << "\n";

	cout << " -----RECEIPT-----\n " << endl;

	cout << "You had " << quantity << " " << service << "\n" << endl;
	cout << setprecision(2) << fixed << "Service fee was " << "$" << fee << "\n" << endl;
	cout << setprecision(2) << fixed << "You sub total was " << "$" << sub_total << "\n" << endl;
	cout << setprecision(2) << fixed << "With 5% tax, " << "Your Total becomes " << "$" << total << endl;
	return 0;
}