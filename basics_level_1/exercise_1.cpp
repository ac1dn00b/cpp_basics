#include <iostream>

int main()
{
    /* 1.1 Ask for the name and age of a user and print the info */
    std::cout << "Level 1 Exercises" << std::endl;
    std::cout << "Exercise 1.1" << std::endl;
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Please enter your age: ";
    int age;
    std::cin >> age;
    std::cout << "Your name is " << name << " and you are " << age << " years old." << std::endl;
    std::cout << std::endl;

    return 0;
}
