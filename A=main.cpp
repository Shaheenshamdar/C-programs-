#include <iostream>
#include "calculator.h"
using namespace std;

int add(int c, int d) {
    return c + d;
}

int subtract(int c, int d) {
    return c - d;
}

int multiply(int c, int d) {
    return c * d;
}

int divide(int c, int d) {
    if (d == 0) {
        return 0;
    }
    return c / d;
}

int main() {
    int x = 10, y = 5;

    cout << add(x, y) << endl;
    cout << subtract(x, y) << endl;
    cout << multiply(x, y) << endl;
    cout << divide(x, y) << endl;

    return 0;
}
