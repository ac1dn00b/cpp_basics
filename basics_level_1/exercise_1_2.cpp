#include<iostream>

int main()
{
/* 1.2 Ask the user for 2 int numbers, add them and print them */
    std::cout << "Exercise 1.2" << std::endl;
    std::cout << "Please enter two integers." << std::endl;
    int integer1;
    int integer2;
    std::cout << "Integer 1: ";
    std::cin >> integer1;
    std::cout << "Integer 2: ";
    std::cin >> integer2;
    std::cout << "Int1 is: " <<  integer1 << " and Int2 is: " << integer2 << std::endl;
    std::cout << "The sum is: " <<  integer1 + integer2 << std::endl;
    std::cout << std::endl;
    return 0;
}
