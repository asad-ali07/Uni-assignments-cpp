#include <iostream>
using namespace std;

long long exponent(int base, int power) {
    if (power == 0) {
        return 1;
    } else {
        return base * exponent(base, power - 1);
    }
}

int main() {
    int base, power;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    long long result = exponent(base, power);
    cout << base << " raised to the power of " << power << " is: " << result << endl;

    return 0;
}