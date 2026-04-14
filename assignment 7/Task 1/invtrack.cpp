#include <iostream>
using namespace std;

int main() {
	int current[100][100] = { 0 };
	int previous[100][100] = { 0 };
	int sum[100][100];
	int products;
	int locations;

	cout << "Enter the number of products(rows): ";
	cin >> products;
	cout << "Enter the number of locations(columns): ";
	cin >> locations;

	cout << "\nEnter inventory for current month (Matrix A): " << endl;

	for (int i = 0; i < products; i++) {
		for (int j = 0; j < locations; j++) {
			cout << "Product " << i + 1 << ", Location " << j + 1 << ": ";
			cin >> current[i][j];
		}
	}
	cout << "\nEnter inventory for previous month (Matrix B): " << endl;

	for (int i = 0; i < products; i++) {
		for (int j = 0; j < locations; j++) {
			cout << "Product " << i + 1 << ", Location " << j + 1 << ": ";
			cin >> previous[i][j];
		}
	}
	for (int i = 0; i < products; i++) {
		for (int j = 0; j < locations; j++) {
			sum[i][j] = current[i][j] + previous[i][j];
		}
	}
	cout << "\nConsolidated Inventory (Current + Previous month): " << endl;
	for (int i = 0; i < products; i++) {
		for (int j = 0; j < locations; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}