#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

double findMax(double a, double b, double c) {
    if (a >= b && a >= c)
        return a;
    if (b >= a && b >= c)
        return b;
    return c;
}

int main() {
    double f1,f2,f3;
    int i1,i2;
    char choice;

    cout << "Do you want to calculate floats or integers? (f/i): ";
    cin >> choice;

    if (choice == 'f' || choice == 'F') {
        cout << "Enter three floating values: ";
        cin >> f1 >> f2 >> f3;

        cout << "The maximum of " << f1 << ", " << f2 << ", and " << f3 << " is: " 
             << findMax(f1, f2, f3) << endl;
    }
    else if (choice == 'i' || choice == 'I') {
        cout << "Enter two integer values: ";
        cin >> i1 >> i2;
        
        cout << "The maximum of " << i1 << " and " << i2 << " is: " 
             << findMax(i1, i2) << endl;
    }
    else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}