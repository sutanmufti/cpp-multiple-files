#include <iostream>
#include <module.h>

int main() {
    int input_one;
    int input_two;

    std::cout << "please insert a number: ";
    std::cin >> input_one;

    std::cout  << '\n';
    std::cout << "please insert another number: ";
    std::cin >> input_two;
    std::cout  << '\n';

    int addition = add(input_one,input_two);
    std::cout << "the sum of the numbers you've entered: " << addition << std::endl;
    std::cout << "the equivalent char of the number is: \"";
    equivalentInt(addition);
    std::cout << "\"" << std::endl;
    return 0;
}