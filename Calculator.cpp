#include "1 calculator.h"

namespace calculator {
    int add(int p, int q) {
        return p + q;
    }

    int subtract(int p, int q) {
        return p - q;
    }

    int multiply(int p, int q) {
        return p * q;
    }

    int divide(int p, int q) {
        if (q == 0)
            return 0;
        return p / q;
    }
}
