#pragma once

namespace MathUtils {

    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);

    const double PI = 3.14159;

    namespace Advanced {
        double power(double base, int exponent);
        double circleArea(double radius);
    }
}