#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /, sin, cos, tan, sqrt, ^): ";
    cin >> operation;

    if (operation == 's' || operation == 'c' || operation == 't' || operation == 'q') {
        switch (operation) {
            case 's':
                cout << "Result: " << sin(num1) << endl;
                break;
            case 'c':
                cout << "Result: " << cos(num1) << endl;
                break;
            case 't':
                cout << "Result: " << tan(num1) << endl;
                break;
            case 'q':
                cout << "Result: " << sqrt(num1) << endl;
                break;
        }
    } else {
        cout << "Enter another number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case '^':
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
    }

    return 0;
}