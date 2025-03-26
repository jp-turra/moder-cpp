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
    
    // Prefix operator - Increment by one before the operation
    int sum = ++a + b; // 11 + 3
    int sub = --a - b; // 10 - 3
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Subtraction: " << sub << std::endl;
    std::cout << "Value of a: " << a << std::endl;

    // Postfix operator - Increment by one after the operation
    sum = a++ + b; // 10 + 3
    sub = a-- - b; // 11 - 3
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Subtraction: " << sub << std::endl;
    std::cout << "Value of a: " << a << std::endl;

    ++a;
    b++;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;


    return EXIT_SUCCESS;
}
