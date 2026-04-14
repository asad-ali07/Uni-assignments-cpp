#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string name[5];
	float price[5] = {200, 1000, 1500, 2500, 4000};
	float quantity[5];
	float total = 0;
	float total_discount = 0;
	
	cout << "Welcome to TechHaven!" << endl;
	
	for (int i = 0; i < 5; i++) {
			cout << "Enter the name of product: ";
			cin >> name[i];

			cout << "Enter the quantity of items: ";
			cin >> quantity[i];

			total += price[i] * quantity[i];
	}

	float discount = 0;
	if (total < 2500) {
		discount = 0;

	}
	else if (total >= 2500 && total < 3500) {
		discount = 0.05;

	}
	else if (total >= 3500 && total < 5500) {
		discount = 0.07;

	}
	else if (total >= 5500 && total < 10000) {
		discount = 0.09;

	}
	else if (total >= 10000 && total <= 15000) {
		discount = 0.11;
	}

	float discount_price = total * discount;
	float grand_total_rs = total - discount_price;
	float grand_total_usd = grand_total_rs / 279.85;
	float grand_total = total - discount_price;
	
	cout << "Order details: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "\nProduct name: " << name[i] << "\nProduct price: " << price[i] << "\nProduct Quantity: " << quantity[i]
			<< "\nTotal price(individual items): " << price[i] * quantity[i];
	}
	
	cout << "  Total (before discount) : Rs. " << total << endl;
	cout << "  Discount Rate           : " << discount * 100 << "%" << endl;
	cout << "  Discount Amount         : Rs. " << discount_price << endl;
	cout << "  Grand Total (Rs.)       : Rs. " << grand_total_rs << endl;
	cout << "  Grand Total (USD)       : $ " << grand_total_usd << endl;

	return 0;
}