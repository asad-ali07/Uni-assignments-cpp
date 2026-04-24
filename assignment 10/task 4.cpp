#include <iostream>
using namespace std;

int population(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return population(n - 1) + population(n - 2);
    }
}

int main() {
    int n, initial;
    cout << "Welcome to the rabbit population growth simulator!" << endl;
    cout << "Enter the initial number of rabbit pairs: ";
    cin >> initial;
    cout << "Enter the number of months for simulation: ";
    cin >> n;
    cout << "After " << n << " months, the population of rabbits is: " << population(n + initial) << endl;
    return 0;
}