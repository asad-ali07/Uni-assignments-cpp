#include <iostream>
#include <cmath>
using namespace std;

float add(float a,float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    if (b != 0) return a / b;
    else {
        cout << "Error.Division by zero!" << endl;
        return 0;
    }
}
float power(float a, float b){
    return pow(a,b);
}

int main(){
    float num1,num2;
    char operation;
    cout << "Welcome to the Calculator!" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation ( +, -, *, /, ^): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operation){
        case '+':
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << add(num1,num2);
        break;
        case '-':
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << subtract(num1,num2);
        break;
        case '*':
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << multiply(num1,num2);
        break;
        case '/':
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << divide(num1,num2);
        break;
        case '^':
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << power(num1,num2);
        break;
        default:
        cout << "Error.Invalid operation!" << endl;
    }
}