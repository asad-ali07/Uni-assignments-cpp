#include <iostream>
#include <String>
using namespace std;

int main() {
	string products[5] = { "Apples", "Oranges","Bananas","Bread","Milk" };
	int quantitys[5] = { 0 };
	char stock;
	string product;
	int quantity;

	cout << "Current Inventory: \n" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ". " << products[i] << ": " << quantitys[i] << " Units" << endl;
	}
	do {
		cout << "\nEnter the product name to restock: ";
		cin >> product;
		int check = -1;

		for (int i = 0; i < 5; i++) {
			if (products[i] == product) {
				check = i;
				break;
			}
		}
		if (check == -1) {
			cout << "\nError! Product " << product << " not found in inventory. Please enter a valid product name.\n" << endl;
		}
		else {
			cout << "\nEnter the quantity to restock: ";
			cin >> quantity;
			if (quantity <= 0) {
				cout << "\nError! Invalid quantity. Please enter a valid number. \n" << endl;

			}
			else { quantitys[check] += quantity; }
		}
		cout << "\nWould you like to restock another product? (Y/N):";
		cin >> stock;
		
		cout << "\nCurrent Inventory: \n" << endl;
		for (int i = 0; i < 5; i++) {
			cout << i + 1 << ". " << products[i] << ": " << quantitys[i] << " Units" << endl;
		}
	} while (stock == 'Y' || stock == 'y');
	
	return 0;
}