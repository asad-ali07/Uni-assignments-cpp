#include <iostream>
#include <cmath>
using namespace std;

float area(float radius) {
    return M_PI * radius * radius;
}

float area(float lenght, float width) {
    return lenght * width;
}

float area(float base, double height) {
    return (base * height) / 2;
}

int main() {
    int choice;
    cout << "What do you want to calculate the area of? \n";
    cout << "1. Circle \n";
    cout << "2. Rectangle \n";
    cout << "3. Triangle \n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            float radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "The Area of circle with radius " << radius << " is: " << area(radius) << endl;
            break;
        }
        case 2: {
            float lenght, width;
            cout << "Enter the lenght and width of the rectangle: ";
            cin >> lenght >> width;;
            cout << "The Area of rectangle with lenght " << lenght << " and width" << width << " is: " << area(lenght, width) << endl;
            break;
        }
        case 3: {
            float base;
            double height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "The Area of triangle with base " << base << " and height " << height << " is: " << area(base, height) << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please enter a valid option." << endl;
    }
    return 0;
}