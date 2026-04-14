#include <iostream>
using namespace std;

int main() {
	int avail_seats = 35; int reserve_seats;

	cout << "Welcome to the ticket reservation system " << endl;
	cout << "\nEnter the number of seats you want to reserve: ";
	cin >> reserve_seats;

	if (reserve_seats <= avail_seats) {
		cout << "\nSeats reserved successfully! Enjoy your journey." << endl;
		int remaining = avail_seats - reserve_seats;
		cout << "\nremaining available seats: " << remaining << endl;
	}
	else {
		cout << "\nSeats unavailable! limit exceeded." << endl;
	}
	return 0;
}