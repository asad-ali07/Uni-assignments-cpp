#include <iostream>
using namespace std;

int main() {
	int num_items; double unit_price; int item_stock; double total = 0;

	cout << "Enter the number of different items in stock: ";
	cin >> num_items;

	for (int i = 1; i <= num_items; i++) {
		cout << "Enter the price per unit for item " << i << ": $";
		cin >> unit_price;

		cout << "Enter the quantity in stock for item " << i << ": ";
		cin >> item_stock;

		total += unit_price * item_stock;
	}
	
	cout << "Total value of inventory: $" << total;

	return 0;
}