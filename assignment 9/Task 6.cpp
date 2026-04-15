#include <iostream>
#include <cmath>
using namespace std;

// float formula(int i, int a) {
//     int radius;
//     const float pi = 3.14;
//     float angle = 2 * pi * i / a;
//     float x = radius * cos(angle);
//     float y = radius * sin(angle);

//     i = x;
//     a = y;
//     return x,y;
// }

// int main() {
//     int points, radius;
//     float x, y;

//     cout << "Enter the radius of the circle: ";
//     cin >> radius;

//     cout << "Enter the number of points: ";
//     cin >> points;

//     cout << "Coordinates along the circumference of the circle:" << endl;

//     for(int i = 0; i < points; i++) {
//         cout << "Point " << i + 1 << ": " << formula(i, points) << endl;
//     }
//     return 0;
// }

void function() {
    int radius;
    const float pi = 3.14;
    int points;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the number of points: ";
    cin >> points;

    cout << "Coordinates along the circumference of the circle:" << endl;

    for(int i = 0; i < points; i++) {
        float angle = 2 * pi * i / points;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        cout << "Point " << i + 1 << ": (" << x << ", " << y << ")" << endl;
    }
    return;
}

int main() {
    function();
    return 0;
}