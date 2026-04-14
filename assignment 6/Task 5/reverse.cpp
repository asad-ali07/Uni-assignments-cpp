#include <iostream>
using namespace std;

int main() {
	int numbers[10] = { 0 };
	int reverse[10] = { 0 };

    cout << "Enter 10 integer ratings: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Rating " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 9; i >=0; i--) {
        reverse[9 - i] = numbers[i];
    }

    cout << "Rating in reverse order: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << reverse[i] << " ";
    }

	return 0;
}