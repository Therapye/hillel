#include <iostream>
#include "math_utils.h"

int main() {

    using namespace MathUtils;
    namespace Adv = MathUtils::Advanced;

    int x = 3, y = 4;
    double radius = 5.0;

    std::cout << "Addition: " << add(x, y) << std::endl;
    std::cout << "Power: " << Adv::power(2, 3) << std::endl;
    std::cout << "Circle Area: " << Adv::circleArea(radius) << std::endl;

    return 0;
}