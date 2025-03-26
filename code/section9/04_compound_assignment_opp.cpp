#include <iostream>
#include <string.h>
#include <math.h>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    int value = 10;
    
    // Compound assignment operators
    // +=, -=, *=, /=, %=

    value += 5; // value = 10 + 5
    std::cout << "Value: " << value << std::endl;

    value -= 5; // value = 15 - 5
    std::cout << "Value: " << value << std::endl;

    value *= 5; // value = 10 * 5
    std::cout << "Value: " << value << std::endl;

    value /= 5; // value = 50 / 5
    std::cout << "Value: " << value << std::endl;

    value %= 5; // value = 10 % 5
    std::cout << "Value: " << value << std::endl;


    return EXIT_SUCCESS;
}
