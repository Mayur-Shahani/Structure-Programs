#include <iostream>
using namespace std;

struct Calculator {
    double num1, num2;

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Division by Zero not possible" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator cal; 
    char operation;
    cout << "Enter first number: ";
    cin >> cal.num1;
    cout << "Enter second number: ";
    cin >> cal.num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout  << cal.add() << endl;
            break;
        case '-':
            cout  << cal.subtract() << endl;
            break;
        case '*':
            cout  << cal.multiply() << endl;
            break;
        case '/':
            cout << cal.divide() << endl;
            break;
        default:
            cout << "Choose from +,-,*,/" << endl;
    }

    return 0;
}

