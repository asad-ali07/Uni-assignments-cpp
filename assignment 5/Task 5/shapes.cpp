#include <iostream>
using namespace std;

int main() {
    int n = 5;

    cout << "Inverted Right Triangle:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Hollow Square:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Combination of Patterns:\n";

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= n; j++) {
                if (j <= i)
                    cout << "* ";
                else
                    cout << "  ";
            }

            cout << "";

            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n)
                    cout << "* ";
                else
                    cout << "  ";
            }

            cout << endl;
        }

    return 0;
}