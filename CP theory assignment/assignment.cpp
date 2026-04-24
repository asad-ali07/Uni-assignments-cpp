#include <iostream>
using namespace std;

int main() {
    double customer[5];
    double total = 0;
    int suff = 0, low = 0;
    int size = sizeof(customer) / sizeof(customer[0]);
    
    cout << '\n';
    cout << "************************************************" << endl;
    cout << "Welcome to Bank Customer Balance Analysis System" << endl;
    cout << "************************************************" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter balance for Customer " << i + 1 << ": $";
        cin >> customer[i];
        cout << '\n';
        total += customer[i];
    }

    for (int i = 0; i < size; i++) {
        if (customer[i] >= 10000) {
            suff++;
        }
        else if (customer[i] >= 5000 && customer[i] < 10000) {
            low++;
        }
    }
    
    double max = customer[0];
    double min = customer[0];
    float average = total / double(size);
    
    for (int i = 0; i < size; i++) 
    {
        if (customer[i] > max) {
            max = customer[i];
        }
        if (customer[i] < min) {
            min = customer[i];
        }
    }
    cout << "************************************************" << endl;
    cout << "************************************************" << endl;
    for (int i = 0; i < size; i++) {
        if (customer[i] >= 10000) {
            cout << "Account Balance for Customer " << i + 1 << ": $" << customer[i] << " is sufficient enough." << endl;
        }
        else if (customer[i] >= 5000 && customer[i] < 10000) {
            cout << "\nAccount Balance for Customer " << i + 1 << ": $" << customer[i] << " is low balance." << endl;
        }
        else {
            cout << "\nAccount Balance for Customer " << i + 1 << ": $" << customer[i] << " is very low balance." << endl;
        }
    }
    cout << "\n************************************************" << endl;
    cout << "************************************************" << endl;
    cout << "Total balance of all customers: $" << total << endl;
    cout << "\nAverage balance of all customers: $" << average << endl;
    cout << "\nMaximum balance among all customers: $" << max << endl;
    cout << "\nMinimum balance among all customers: $" << min << endl;
    cout << "\nNumber of customers with low balance is " << low << endl;
    cout << "\nNumber of customers with sufficient balance is " << suff << endl;
    cout << "\n************************************************\n" << endl;
    return 0;
}