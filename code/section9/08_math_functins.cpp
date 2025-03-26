#include <iostream>
#include <math.h>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    int a = 10.70;
    int b = 3.14;
    int c = -3;

    std::cout << "Absolute value of a: " << std::abs(a) << std::endl;
    std::cout << "Floor of b: " << std::floor(b) << std::endl;
    std::cout << "Ceil of c: " << std::ceil(c) << std::endl;
    std::cout << "Round of b: " << std::round(b) << std::endl;

    std::cout << "Max of a and b: " << std::max(a, b) << std::endl;
    std::cout << "Min of a and b: " << std::min(a, b) << std::endl;

    std::cout << "Square root of b: " << std::sqrt(b) << std::endl;
    std::cout << "Power of b and c: " << std::pow(b, c) << std::endl;

    std::cout << "Log of b: " << std::log(b) << std::endl;
    std::cout << "Log2 of b: " << std::log2(b) << std::endl;
    std::cout << "Log10 of b: " << std::log10(b) << std::endl;

    std::cout << "Sine of b: " << std::sin(b) << std::endl;
    std::cout << "Cosine of b: " << std::cos(b) << std::endl;
    std::cout << "Tangent of b: " << std::tan(b) << std::endl;

    return EXIT_SUCCESS;
}