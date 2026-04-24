#include <iostream>
using namespace std;

int findSmallest(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int findSmallest(int a, int b, int c) {
    int min = findSmallest(a, b);
    if (c < min)
        return c;
    else
        return min;
}

int findSmallest(int a, int b, int c, int d) {
    int min = findSmallest(a, b, c);
    if (d < min)
        return d;
    else
        return min;
}

int findLargest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int findLargest(int a, int b, int c) {
    int max = findLargest(a, b);
    if (c > max)
        return c;
    else
        return max;
}

int findLargest(int a, int b, int c, int d) {
    int max = findLargest(a, b, c);
    if (d > max)
        return d;
    else
        return max;
}

int main() {
    int n;
    int a, b, c, d;
    cout << "Enter how many numbers (2 to 4): ";
    cin >> n;

    if (n < 2 || n > 4) {
        cout << "Invalid input!";
        return 0;
    }

    cout << "Enter numbers: ";
    cin >> a >> b;

    if (n >= 3) cin >> c;
    if (n == 4) cin >> d;

    cout << "\n";
    cout << "Smallest among First two is : " << findSmallest(a, b) << endl;
    cout << "Largest among first two is : " << findLargest(a, b) << endl;

    if (n >= 3) {
        cout << "\n";
        cout << "Smallest among First three is : " << findSmallest(a, b, c) << endl;
        cout << "Largest among first three is : " << findLargest(a, b, c) << endl;
    }

    if (n == 4) {
        cout << "\n";
        cout << "Smallest among all four is : " << findSmallest(a, b, c, d) << endl;
        cout << "Largest among all four is : " << findLargest(a, b, c, d) << endl;
    }

    return 0;
}