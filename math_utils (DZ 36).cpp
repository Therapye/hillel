#include "math_utils.h"
#include <cmath>

namespace MathUtils {

    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    namespace Advanced {
        double power(double base, int exponent) {
            return std::pow(base, exponent);
        }

        double circleArea(double radius) {
            return PI * radius * radius;
        }
    }
}