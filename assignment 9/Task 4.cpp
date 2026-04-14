#include <iostream>
#include <string>
using namespace std;

void welcome() {
    cout << "Welcome to the Driving Eligibility Checker!" << endl;
}

int age() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

string vehicle(){
    string vehicle;
    cout << "Enter the type of vehicle you want to drive(car / motorcycle): ";
    cin >> vehicle;
    return vehicle;
}

int main() {
    welcome();

    int person_age = age();
    string person_vehicle = vehicle();
    string validity;
    
    cout << "Do you have a valid driving license? (yes / no): ";
    cin >> validity;

    if (person_age >= 18 && person_vehicle == "car" && validity == "yes") {
        cout << "You are eligible to drive a car." << endl;
    }
    else if (person_age >= 18 && person_vehicle == "car" && validity == "no") {
        cout << "You are not eligible to drive a car." << endl;
    }
    else if (person_age < 18 && person_vehicle == "car" && validity == "yes") {
        cout << "You are not eligible to drive a car." << endl;
    }
    else if (person_age < 18 && person_vehicle == "car" && validity == "no") {
        cout << "You are not eligible to drive a car." << endl;
    }
    else if (person_age >= 16 && person_vehicle == "motorcycle" && validity == "yes") {
        cout << "You are eligible to drive a motorcycle." << endl;
    }
    else if (person_age >= 16 && person_vehicle == "motorcycle" && validity == "no") {
        cout << "You are not eligible to drive a motorcycle." << endl;
    }
    else if (person_age < 16 && person_vehicle == "motorcycle" && validity == "yes") {
        cout << "You are not eligible to drive a motorcycle." << endl;
    }
    else {
        cout << "Invalid input." << endl;
    }
    return 0;
}