#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "Current date and time: " << dt;
    return 0;
}
