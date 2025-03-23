#include <iostream>

/**
 * @brief Make addition of two numbers
 * 
 * @param a First number to add
 * @param b Second number to add
 * 
 * @return int Sum of two numbers
 */
int add(int a, int b)
{
    return a + b;
}

int main(int argc, const char** argv) {
    // This is a statement. All of them end with semicolon (;)
    int first_number = 12;
    int second_number = 9;

    int sum = add(first_number, second_number);

    std::cout << "Result: " << sum << std::endl;

    // Statements are executed sequentially from top to bottom.
    return EXIT_SUCCESS;
}