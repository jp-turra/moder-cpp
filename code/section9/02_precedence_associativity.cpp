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
    int c = 2;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;

    // Multiplication and division come first than addition and subtraction

    // Associativity stands for the order in which direction or wich order the operations are evaluated
    // Precedence stands for the order in which operation are evaluated first. Check the link:
    // https://en.cppreference.com/w/cpp/language/operator_precedence
    int sum = (a + b) * c;
    std::cout << "Sum: " << sum << std::endl;

    return EXIT_SUCCESS;
}
