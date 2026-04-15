#include <iostream>
#include <cmath>
using namespace std;

void numpoints() {
    int radius;
    const float pi = 3.14;
    int points;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the number of points: ";
    cin >> points;

    cout << "Coordinates of points along the circumference of the circle:" << endl;

    for(int i = 0; i < points; i++) {
        float angle = 2 * pi * i / points;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        cout << "Point " << i + 1 << ": (" << x << ", " << y << ")" << endl;
    }
    return;
}

int main() {
    numpoints();
    return 0;
}