#include <iostream>
using namespace std;

int main() {
	double body_temp;
	
	cout << "Enter the body temperature in Celsius: ";
	cin >> body_temp;

	if (body_temp < 36.5) {
		cout << "\nYou have hypothermia! \n";

	}
	else if (body_temp > 36.5 && body_temp < 37.5) {
		cout << "\nYou have a normal body temperature! \n";
	}
	else if (body_temp > 37.6 && body_temp < 38.5) {
		cout << "\nYou have a low grade fever!\n ";
	}
	else {
		cout << "\nYou have a high fever! \n";
	}
	return 0;
}