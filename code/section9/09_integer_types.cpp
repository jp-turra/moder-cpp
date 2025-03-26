#include <cstdint>
#include <iostream>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    short int short_int = 10;
    short int short_int2 = 20;

    char char1 = 50;
    char char2 = 100;

    std::cout << "sizeof short int: " << sizeof(short_int) << std::endl;
    std::cout << "sizeof short int2: " << sizeof(short_int2) << std::endl;

    std::cout << "sizeof char1: " << sizeof(char1) << std::endl;
    std::cout << "sizeof char2: " << sizeof(char2) << std::endl;

    auto resul1 = short_int + short_int2;
    auto result2 = char1 + char2;

    std::cout << "sizeof result1: " << sizeof(resul1) << std::endl;
    std::cout << "sizeof result2: " << sizeof(result2) << std::endl;

    return EXIT_SUCCESS;
}