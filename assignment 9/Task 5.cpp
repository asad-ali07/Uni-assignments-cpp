#include <iostream>
using namespace std;

string category[100];
float amount[100];
int transaction_count = 0;

void record_transaction() {
    cout << "Enter the transaction category: ";
    cin >> category[transaction_count];
    
    cout << "Enter the transaction amount: ";
    cin >> amount[transaction_count];

    cout << "Transaction recorded successfully!" << endl;
    transaction_count++;
}

float view_expenses() {
    float total_expenses = 0;
    for(int i = 0; i < transaction_count; i++) {
        if(amount[i] < 0) {
            total_expenses += -amount[i];
        }
    }
    return total_expenses;
}

float view_income() {
    float total_income = 0;
    for(int i = 0; i < transaction_count; i++) {
        if(amount[i] > 0) {
            total_income += amount[i];
        }
    }
    cout << "Total Income: $" << total_income << endl;
    return total_income;
}

void view_budget() {
    float expenses = view_expenses();
    float income = view_income();
    float budget = income - expenses;
    cout << "Current Budget: $" << budget << endl;
}

int main() {
    int choice;
    cout << "Personal Finance Tracker Menu:" << endl;
    do{
        cout << "1. Record Transaction\n2. View Expenses\n3. View Income\n4. View Budget\n5. Exit" << endl;
        cout << "\nChoose an option(1,2,3,4,5): ";
        cin >> choice;

        switch(choice) {
            case 1:
                record_transaction();
                cout << "\n";
                break;
            
            case 2:
                cout << "Total Expenses: $" << view_expenses() << endl;
                cout << "\n";
                break;
            case 3:
                cout << "Total Income: $" << view_income() << endl;
                cout << "\n";
                break;
            case 4:
                view_budget();
                cout << "\n";
                break;
            case 5:
                cout << "Exiting the Personal Finance Tracker.\nThank you for using the program.\nGoodbye!" << endl;
                break;
            default:
                cout << "Invalid option! Please choose a valid option." << endl;
                break;
        }

    } while (choice != 5);
    return 0;
}