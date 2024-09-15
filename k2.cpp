#include <iostream>
using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    int choice;

    cout << "Basic Calculator" << endl;
    cout << "Select operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "The result is: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "The result is: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "The result is: " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "The result is: " << divide(num1, num2) << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid input. Please select a valid operation." << endl;
            break;
    }

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
