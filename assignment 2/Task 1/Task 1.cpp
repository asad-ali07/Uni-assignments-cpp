#include <iostream>
using namespace std;
int main() {
	cout << "Welcome to the World Travel Planner!\n" << endl;
	float x;
	cout << "Enter your distance in miles: ";
	cin >> x;
	cout << "\n";
	float y = x * 1.60934;
	cout << "Your converted distance in international units is " << y << " Km\n";
	return 0;
}