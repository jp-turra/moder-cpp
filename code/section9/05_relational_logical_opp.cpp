#include <iostream>
#include <string.h>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    // Relational operators
    // ==, !=, >, <, >=, <=

    int a = 10;
    int b = 3;

    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;

    // Logical operators
    // &&, ||, !

    unsigned int c = 0b10;
    unsigned int d = 0b11;

    std::cout << "c && d: " << (c && d) << std::endl;
    std::cout << "c || d: " << (c || d) << std::endl;
    std::cout << "!c: " << (!c) << std::endl;

    return EXIT_SUCCESS;
}