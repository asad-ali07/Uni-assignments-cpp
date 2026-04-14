#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name[100];
    int age[100];
    float fareBeforeDiscount[100] = {};
    float fareAfterDiscount[100] = {};
    int totalAdults = 0;
    int totalKids = 0;
    int count = 0;
    string choice;

    do {
        cout << "Enter name: ";
        cin >> name[count];
        cout << "Enter age: ";
        cin >> age[count];

        if (age[count] < 18) {
            fareBeforeDiscount[count] = 2500;
            totalKids++;
        }
        else {
            fareBeforeDiscount[count] = 7000;
            totalAdults++;
        }

        count++;

        cout << "Do you want to add more passengers? (yes/no): ";
        cin >> choice;

    } while (choice == "yes" || choice == "Yes" || choice == "YES");

    // Apply discounts
    for (int i = 0; i < count; i++) {
        fareAfterDiscount[i] = fareBeforeDiscount[i]; // default: no discount

        if (age[i] < 18 && totalKids >= 2) {
            fareAfterDiscount[i] = fareBeforeDiscount[i] * 0.5;
        }
        else if (age[i] >= 18 && totalAdults >= 3) {
            fareAfterDiscount[i] = fareBeforeDiscount[i] * 0.4;
        }
    }

    // Calculate totals
    float totalBefore = 0, totalAfter = 0;
    for (int i = 0; i < count; i++) {
        totalBefore += fareBeforeDiscount[i];
        totalAfter += fareAfterDiscount[i];
    }

    // Report
    cout << "\n--- BOOKING REPORT ---" << endl;
    cout << left << setw(15) << "Name"
        << setw(6) << "Age"
        << setw(22) << "Fare Before Discount"
        << setw(20) << "Fare After Discount" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < count; i++) {
        cout << left << setw(15) << name[i]
            << setw(6) << age[i]
                << setw(22) << fareBeforeDiscount[i]
                    << setw(20) << fareAfterDiscount[i] << endl;
    }

    cout << "-------------------------------------------------------------" << endl;
    cout << "Total Amount Before Discount: Rs. " << totalBefore << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "After Discount Total Amount to be Paid: Rs. " << totalAfter << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Thank you for booking with Promises Delivered!" << endl;

    return 0;
}