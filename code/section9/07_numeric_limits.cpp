#include <limits>
#include <iostream>
#include <iomanip>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    // Setting console configuration
    std::cout << std::dec << std::showpos << std::left << std::setprecision(2) << std::fixed;

    std::numeric_limits<short> short_limits;
    std::numeric_limits<unsigned short> u_short_limits;
    std::numeric_limits<int> int_limits;
    std::numeric_limits<unsigned int> u_int_limits;
    std::numeric_limits<long> long_limits;
    std::numeric_limits<unsigned long> u_long_limits;
    std::numeric_limits<float> float_limits;
    std::numeric_limits<double> double_limits;
    std::numeric_limits<long double> long_double_limits;

    std::cout << "short min: " << std::setw(10) << short_limits.min() << std::endl;
    std::cout << "short max: " << std::setw(10) << short_limits.max() << std::endl;

    std::cout << "unsigned short min: " << std::setw(10) << u_short_limits.min() << std::endl;
    std::cout << "unsigned short max: " << std::setw(10) << u_short_limits.max() << std::endl;
    
    std::cout << "int min: " << std::setw(10) << int_limits.min() << std::endl;
    std::cout << "int max: " << std::setw(10) << int_limits.max() << std::endl;

    std::cout << "unsigned int min: " << std::setw(10) << u_int_limits.min() << std::endl;
    std::cout << "unsigned int max: " << std::setw(10) << u_int_limits.max() << std::endl;

    std::cout << "long min: " << std::setw(10) << long_limits.min() << std::endl;
    std::cout << "long max: " << std::setw(10) << long_limits.max() << std::endl;

    std::cout << "unsigned long min: " << std::setw(10) << u_long_limits.min() << std::endl;
    std::cout << "unsigned long max: " << std::setw(10) << u_long_limits.max() << std::endl;

    std::cout << "float min: " << std::setw(10) << float_limits.min() << std::endl;
    std::cout << "float max: " << std::setw(10) << float_limits.max() << std::endl;

    std::cout << "double min: " << std::setw(10) << double_limits.min() << std::endl;
    std::cout << "double max: " << std::setw(10) << double_limits.max() << std::endl;

    std::cout << "long double min: " << std::setw(10) << long_double_limits.min() << std::endl;
    std::cout << "long double max: " << std::setw(10) << long_double_limits.max() << std::endl;

    return 0;
}
