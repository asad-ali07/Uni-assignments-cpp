#include <iostream>
using namespace std;

int least(int num) {
    return num % 10;
}

int most(int num) {
    return num / 100;
}

int sum(int num) {
    int left = most(num);
    int middle = (num / 10) % 10;
    int right = least(num);
    return left + middle + right;
}

bool palindrome(int num) {
    int left = most(num);
    int right = least(num);
    return left == right;
}

int main() {
    int number;

    cout << "Enter a three-digit number: ";
    cin >> number;

    cout << "Least significant digit: " << least(number) << endl;

    cout << "Most significant digit: " << most(number) << endl;

    cout << "Sum of digits: " << sum(number) << endl;

    if(palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}