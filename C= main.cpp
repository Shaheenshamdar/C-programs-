
#include <iostream>
#include "2 calculator.h"

using namespace std;
using namespace calculator;

int main() {
    int p, q;

    cout << "Enter two numbers (p and q): ";
    cin >> p >> q;

    cout << "Addition: " << add(p, q) << endl;
    cout << "Subtraction: " << subtract(p, q) << endl;
    cout << "Multiplication: " << multiply(p, q) << endl;

    if (q != 0)
        cout << "Division: " << divide(p, q) << endl;
    else
        cout << "Cannot divide by zero." << endl;

    return 0;
}
