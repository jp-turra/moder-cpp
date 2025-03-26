#include <iostream>
#include <string.h>
#include <math.h>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    int a = 10;
    int b = 3;

    // Sum operator
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;

    // Subtraction operator
    int sub = a - b;
    std::cout << "Subtraction: " << sub << std::endl;

    // Multiplication operator
    int mul = a * b;
    std::cout << "Multiplication: " << mul << std::endl;

    // Division operator. For integers, the compiler will return an integer that is how many times b goes into a
    int div = a / b;
    std::cout << "Division: " << div << std::endl;
    
    // Module operator. It returns the remainder of the division
    int mod = a % b;
    std::cout << "Module: " << mod << std::endl;

    return EXIT_SUCCESS;
}
