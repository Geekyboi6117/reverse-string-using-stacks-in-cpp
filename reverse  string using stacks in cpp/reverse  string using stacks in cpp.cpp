#include <iostream>
#include "UniqueStringReversal.h"

int main() {
    std::string input;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    UniqueStringReversal stringReversal(input);

    std::string reversedString = stringReversal.ReverseString();

    std::cout << "Original string: " << input << std::endl;
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
