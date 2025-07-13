#include <iostream>
using namespace std;

int main() {
    int e, f, temp;
    cout << "Enter two numbers: ";
    cin >> e >> f;

    temp = e;
    e = f;
    f = temp;

    cout << "After swapping:" << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;

    return 0;
}
