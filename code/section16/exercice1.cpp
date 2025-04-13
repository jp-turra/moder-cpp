#include <iostream>

#define UNUSED(x) (void) (x)

void unique_numbers( int numbers[], unsigned int collection_size)
{
    int unique_numbers[collection_size] {};
    int unique_index = 0;
    for (int i = 0; i < collection_size; i++)
    {
        int number = numbers[i];
        bool unique = true;

        for (int j = 0; j < i; j++)
        {
            if (number == numbers[j])
            {
                unique = false;
                break;
            }
        }

        if (unique)
        {
            unique_numbers[unique_index] = number;
            unique_index++;
        }
    }

    std::cout << "The collection contains " << unique_index << " unique numbers, they are : ";
    for (int index = 0; index < unique_index; index++)
    {
        std::cout << unique_numbers[index] << " ";
    }

    // std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    int data[] {1,2,4,5,1,8,2,3,6,1,4,2};
    unique_numbers(data, 12);
    
    return EXIT_SUCCESS;
}