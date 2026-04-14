#include <iostream>
using namespace std;

int main() {
	double money; double discount;
	cout << "Enter the total purchase amount in rupees: ";
	cin >> money;
	
	if (money > 15000) {
		discount = money * 0.1;
		money = money - discount;
		cout << "\nCongratulations! you get a 10% discount.\n " << endl;
		cout << "Discounted amount: " << money << endl;	
	}
	else { cout << "Your total amount: " << money << endl; };
	return 0;
}