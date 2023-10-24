#ifndef UNIQUE_STRING_REVERSAL_H
#define UNIQUE_STRING_REVERSAL_H

#include <string>

class UniqueStringReversal {
private:
    std::string inputString;

public:
    UniqueStringReversal(const std::string& str); // Constructor
    std::string ReverseString(); // Reverse the string using a stack
};

#endif
