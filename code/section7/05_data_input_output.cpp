#include <iostream>
#include <string.h>

int main(int argc, char const *argv[])
{
    std::string msg;

    // Print message
    std::cout << "Write your string: ";
    // Read from console
    std::cin >> msg;

    std::cout << "Your message are: " << msg << std::endl;

    std::string name;
    unsigned int age;
    
    // Reading multiple variable
    std::cout << "What is your name and age (Separated by spaces)? ";
    std::cin >> name >> age;
    std::cout << "Your name is " << name << ". You are " << age << " year old" << std::endl;

    // Read multiple inputs in the same variable
    std::cout << "What's your full name?";
    std::getline(std::cin, name);
    std::cout << "your full name is " << name << std::endl;

    // Error message
    std::cerr << "Wait a moment! This is your error!" << std::endl;

    // Log message
    std::clog << "Take a look to my data" << std::endl;

    return EXIT_SUCCESS;
}
