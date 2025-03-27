#include <iostream>

#define UNUSED(x) (void) (x)

// constinit --> Variable should be initialized at compile time (c++20 keyword)
constinit int age = 20;

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    // Literals --> Numerical values that are stored in the program binary code. Not in the memory like a variable
    int literal1{10};
    unsigned char literal2{20u}; // u = unsigned char
    unsigned int literal3{30U}; // U = unsigned int
    long literal4{40L}; // L = long
    signed long literal5{50l}; // l = signed long
    unsigned long literal6{60ul}; // ul = unsigned long

    std::cout << "literal1: " << literal1 << std::endl;
    std::cout << "literal2: " << literal2 << std::endl;
    std::cout << "literal3: " << literal3 << std::endl;
    std::cout << "literal4: " << literal4 << std::endl;
    std::cout << "literal5: " << literal5 << std::endl;
    std::cout << "literal6: " << literal6 << std::endl;

    // Constants --> Variable that you can initialize but cannot be changed
    const int constant1{10};
    const unsigned char constant2{20u};
    const unsigned int constant3{30U};
    const long constant4{40L};
    const signed long constant5{50l};
    const unsigned long constant6{60ul};

    std::cout << "constant1: " << constant1 << std::endl;
    std::cout << "constant2: " << constant2 << std::endl;
    std::cout << "constant3: " << constant3 << std::endl;
    std::cout << "constant4: " << constant4 << std::endl;
    std::cout << "constant5: " << constant5 << std::endl;
    std::cout << "constant6: " << constant6 << std::endl;

    // Constant Expressions --> It's evaluated at compile time
    const int constant_expression1{10 + 20};
    const unsigned char constant_expression2{20u + 30u};
    const unsigned int constant_expression3{30U + 40U};
    const long constant_expression4{40L + 50L};
    const signed long constant_expression5{50l + 60l};
    const unsigned long constant_expression6{60ul + 70ul};

    std::cout << "constant_expression1: " << constant_expression1 << std::endl;
    std::cout << "constant_expression2: " << constant_expression2 << std::endl;
    std::cout << "constant_expression3: " << constant_expression3 << std::endl;
    std::cout << "constant_expression4: " << constant_expression4 << std::endl;
    std::cout << "constant_expression5: " << constant_expression5 << std::endl;
    std::cout << "constant_expression6: " << constant_expression6 << std::endl;

    std::cout << "constant_init1: " << age << std::endl;

    return EXIT_SUCCESS;

}