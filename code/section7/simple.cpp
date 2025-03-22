#include <iostream>

constexpr int get_value() 
{
    return 10;
}

int main()
{
    constexpr int value = get_value();
    std::cout <<  "Value: " << value << std::endl;
    return 0;
}