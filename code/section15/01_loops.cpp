#include <iostream>
#include <iomanip>
#include <vector>

#define UNUSED(x) (void) (x)

// Calling console write operations make the program slow!
// size_t --> Type def for some unsigned int

void call_for_loop(size_t iteration_count)
{
    // For loop (variable; condition; increment)
    for (size_t i = 0; i < iteration_count; i++)
    {
        std::cout << "Iteration: " << std::setw(5) << i << std::endl;
    }
}

void call_multiple_for_loops(size_t iteration_count)
{
    // In this case you need one variable to be the controller and use as condition;

    for (size_t i{0}, x{0}; x < iteration_count; i+=2, x++)
    {
        std::cout << "Iteration: " << std::setw(5) << i << ", " << x << std::endl;
    }
}

void call_range_based_for_loop(size_t iteration_count)
{
    std::vector<int> values;
    for (size_t i = 0; i < iteration_count; i++)
    {
        values.push_back(i*i);
    }

    // Range based for loop
    for (int value : values)
    {
        std::cout << "Value: " << std::setw(5) << value << std::endl;
    }
}

void call_while_loop(size_t iteration_count)
{
    size_t i = 0;
    while (i < iteration_count)
    {
        // Calling console write operations make the program slow!
        std::cout << "Iteration: " << std::setw(5) << i << std::endl;
        i++;
    }
}

void call_do_while_loop(size_t iteration_count) 
{
    size_t i = iteration_count;
    // First run the loop body, then check the condition
    do
    {
        std::cout << "Iteration: " << std::setw(5) << i << std::endl;
        i--;
    } while (i > 0);
}

void print_separation_line()
{
    std::cout << std::endl;
    std::cout << std::setw(10) << std::setfill('*') << "*" << "*" << "*" << std::endl;
    std::cout << std::setfill(' ') << std::endl;
}

void call_infinite_loop()
{
    size_t i = 0;
    while (true)
    {
        std::cout << "Iteration: " << std::setw(5) << i << std::endl;
        i++;
    }
}

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    unsigned int COUNT = 5;

    call_for_loop(COUNT);

    print_separation_line();

    call_multiple_for_loops(COUNT);

    print_separation_line();

    call_range_based_for_loop(COUNT);

    print_separation_line();

    call_while_loop(COUNT);

    print_separation_line();

    call_do_while_loop(COUNT);

    print_separation_line();

    call_infinite_loop();

    return EXIT_SUCCESS;
}