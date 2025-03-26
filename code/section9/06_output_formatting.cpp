#include <iostream>
#include <string.h>

// Manipulators libraris
#include <iomanip>
#include <ios>

#define UNUSED(x) (void) (x)

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    // std::endl - End of line
    std::cout << "Hello";
    std::cout << "World";
    std::cout << std::endl;

    std::cout << "---------------------" << std::endl;

    // std::flush - Flush the buffer, flush the output to the console
    std::cout << "Hello";
    std::cout << "World";
    std::cout << "How";
    std::cout << "are";
    std::cout << "you";
    std::cout << std::flush << std::endl;

    // std::setw - Set the width of the output
    std::cout << "Formatted table:" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << std::setw(10) << "Name";
    std::cout << std::setw(10) << "Age" << std::endl;

    std::cout << std::setw(10) << "John";
    std::cout << std::setw(10) << "25" << std::endl;

    std::cout << std::setw(10) << "Jane";
    std::cout << std::setw(10) << "30" << std::endl;

    std::cout << std::setw(10) << "Jack";
    std::cout << std::setw(10) << "35" << std::endl;

    std::cout << std::setw(10) << "Jill";
    std::cout << std::setw(10) << "40" << std::endl;

    std::cout << std::endl;

    // Internal justified
    // std::left - Left justify
    // std::right - Right justify
    // std::internal - Internal justified

    std::cout << std::endl;
    std::cout << "Internal justified:" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << std::setw(10) << std::left << "Name";
    std::cout << std::setw(10) << std::internal << "Age";
    std::cout << std::setw(10) << std::right << "Height" << std::endl;

    std::cout << std::setw(10) << std::left << "John";
    std::cout << std::setw(10) << std::internal << "25";
    std::cout << std::setw(10) << std::right << "175" << std::endl;

    std::cout << std::setw(10) << std::left << "Jane";
    std::cout << std::setw(10) << std::internal << "30";
    std::cout << std::setw(10) << std::right << "160" << std::endl;
    std::cout << std::endl;

    // std::showpos - Show the positive sign
    // std::noshowpos - Don't show the positive sign
    std::cout << "Formatted table:" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << std::showpos;

    std::cout << std::setw(10) << "Name";
    std::cout << std::setw(10) << "Points" << std::endl;

    std::cout << std::setw(10) << "John";
    std::cout << std::setw(10) << 100 << std::endl;

    std::cout << std::setw(10) << "Jane";
    std::cout << std::setw(10) << 200 << std::endl;

    std::cout << std::setw(10) << "Jack";
    std::cout << std::setw(10) << -100 << std::endl;
    std::cout << std::noshowpos;

    std::cout << std::setw(10) << "Jill";
    std::cout << std::setw(10) << -200 << std::endl;

    std::cout << std::setw(10) << "Jake";
    std::cout << std::setw(10) << 0 << std::endl;

    // std::setfill - Set the fill character
    std::cout << std::endl;
    std::cout << "Formatted table:" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << std::setfill('-');

    std::cout << std::setw(10) << "Name";
    std::cout << std::setw(10) << "Points" << std::endl;

    std::cout << std::setw(10) << "John";
    std::cout << std::setw(10) << 100 << std::endl;

    // std::boolalpha - Show true or false
    // std::noboolalpha - Don't show true or false
    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Bool format: " << true << std::endl;
    std::cout << "Bool format: " << false << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "No Bool format: " << true << std::endl;
    std::cout << "No Bool format: " << false << std::endl;

    // std::dec - Decimal
    // std::hex - Hexadecimal
    // std::oct - Octal
    // std::showbase - Show the base
    // std::noshowbase - Don't show the base
    std::cout << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << 100 << std::endl;
    std::cout << std::hex << 100 << std::endl;
    std::noshowbase;
    std::cout << std::oct << 100 << std::endl;

    // std::uppercase - Show uppercase
    // std::nouppercase - Don't show uppercase

    std::cout << std::endl;
    std::cout << std::dec;
    std::cout << std::uppercase;
    std::cout << "value: " << std::hex << 100 << std::endl;
    std::cout << std::nouppercase;
    std::cout << "value: " << std::hex << 100 << std::endl;

    // std::fixed - Fixed point
    // std::scientific - Scientific notation
    std::cout << std::endl;
    std::cout << std::fixed;
    std::cout << "value: " << 100 << std::endl;
    std::cout << "value: " << 100.0 << std::endl;
    std::cout << "value: " << 100.123456789 << std::endl;
    std::cout << std::scientific;
    std::cout << "value: " << 100 << std::endl;
    std::cout << "value: " << 100.0 << std::endl;
    std::cout << "value: " << 100.123456789 << std::endl;

    return EXIT_SUCCESS;
}