#include <iostream>
#include "calculator.h"
using namespace std;
using namespace calculator;

int main() {
    int p, q;
    cout << "Enter two numbers: ";
    cin >> p >> q;

    cout << "Addition: " << add(p, q) << endl;
    cout << "Subtraction: " << subtract(p, q) << endl;
    cout << "Multiplication: " << multiply(p, q) << endl;

    if (q == 0)
        cout << "Division: Cannot divide by zero" << endl;
    else
        cout << "Division: " << divide(p, q) << endl;

    return 0;
}
