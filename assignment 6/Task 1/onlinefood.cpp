#include <iostream>
#include <string>
using namespace std;

int main() {
	string items[5] = { "burger", "Pizza", "Fries", "Soda", "Ice-cream" };
	double price[5] = { 5.99, 8.49, 2.99,1.99,3.50 };
	int quantity[5] = { 0 };
	int order; char again; char ride; double total = 0; int add_quantity;

	cout << "=== Welcome to FastBite online ordering === \n" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ". " << items[i] << " - $" << price[i] << "\n";
	}
	do {
		cout << "\nEnter item number to order (1-5): ";
		cin >> order;

		if (order >= 1 && order <= 5) {
			cout << "\nEnter quantity for " << items[order - 1] << ": ";
			cin >> add_quantity;
			quantity[order - 1] += add_quantity;
		}
		else {
			cout << "Enter a valid order from the menu!" << endl;
		}
		cout << "\nDo you want to add more items? (y/n): ";
		cin >> again;

	} while (again == 'Y' || again == 'y');
	
	cout << "\nChoose delivery (d) or pickup(p): ";
	cin >> ride;

	cout << "\n === Order Summary === \n" << endl;

	for (int i = 0; i < 5; i++) {
		if (quantity[i] > 0) {
			double itemtotal = price[i] * quantity[i];
			cout << items[i] << " x" << quantity[i] << " = $" << itemtotal << endl;
			total += itemtotal;
		}
	}
	if (ride == 'd' || ride == 'D') {
		cout << "Delivery fee: $3.00\n" << endl;
	}
	total = total + 3.00;
	cout << "Total: $" << total;
	cout << "\nThank you for ordering with Fastbite!" << endl;
	return 0;
}