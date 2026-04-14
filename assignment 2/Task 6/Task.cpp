#include <iostream>
using namespace std;
int main() {
	
	int time;
	cout << "Enter the time in seconds: ";
	cin >> time;
	cout << "\n";
	
	int hour;
	hour = time / 3600;
	hour = hour % 3600;
	
	int minutes;
	minutes = time / 60;
	minutes = minutes % 60;
	
	int seconds;
	seconds = time % 60;

	cout << "Original time = " << time << endl << "\n";
	
	cout << "Converted time = " << hour << " Hours, " << minutes << " Minutes, " << seconds << " Seconds" << "\n";
	return 0;
}