#include <iostream>
using namespace std;

void check_balance(int money){
    cout << "Your Total balance is: $" << money << endl;
    return;
}

int deposit(int money){
    int amount;
    cout << "Enter the amount you want to deposit: ";
    cin >> amount;
    
    if(amount < 0){
        cout << "Invalid amount! Please enter a positive value." << endl;
    }
    else{
        money += amount;
        cout << "Amount deposited successfully!" << endl;
    }
    return money;
}

int withdraw(int money){
    int amount;
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;
    
    if(amount < 0){
        cout << "Invalid amount! Please enter a positive value." << endl;
    }
    else if(amount > money){
        cout << "Insufficient balance!" << endl;
    }
    else{
        money -= amount;
        cout << "Amount withdrawn successfully!" << endl;
    }
    return money;
}

int main() {
    float balance = 1000;
    int choice;
    
    cout << "Welcome to the Bank ATM system!" << endl;
    cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit" << endl;
    do {
        cout << "Choose an option(1,2,3,4): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                cout << "Program ended.\nThank you for using the ATM system!" << endl;
                break;
            default:
                cout << "Invalid option! Please choose a valid option." << endl;
        }
    } while(choice != 4);
    
    return 0;
}