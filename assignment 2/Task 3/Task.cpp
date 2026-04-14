#include <iostream>
using namespace std;
int main() {
	int d, m, y;
	cout << "Enter day: ";
	cin >> d; 
	cout << "\n";
	cout << "Enter Month: ";
	cin >> m;
	cout << "\n";
	cout << "Enter Year: ";
	cin >> y;
	cout << "\n";
	int y0 = y - (14 - m) / 12;
	int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
	int m0 = m + 12 * ((14 - m) / 12) - 2;
	int d0 = (d + x + (31 * m0) / 12) %7;
	cout << "Day of the week is " << d0 << endl;
	return 0;
}