#include <iostream>
using namespace std;
int main() {
	int x = 5000;
	cout << "Remaining bank balance: Rs " << x << "\n" << endl;
	int y;
	cout << "Enter amount of money to withdraw: Rs ";
	cin >> y;
	cout << "\n";
	x = x - y;
	cout << "Withdrawn: Rs " << y << "\n" << endl;
	cout << "Remaining bank balance: Rs " << x << "\n" << endl;
	int z;
	cout << "Enter amount of money to Deposit: Rs ";
	cin >> z;
	cout << "\n";
	x = x + z;
	cout << "Deposited: Rs " << z << "\n" << endl;
	cout << "Remaining bank balance: Rs " << x << "\n" << endl;
	return 0;
}