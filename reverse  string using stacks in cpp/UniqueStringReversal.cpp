#include "UniqueStringReversal.h"
#include <stack>

UniqueStringReversal::UniqueStringReversal(const std::string& str) {
    inputString = str;
}

std::string UniqueStringReversal::ReverseString() {
    std::stack<char> charStack;

    // Push characters onto the stack
    for (char c : inputString) {
        charStack.push(c);
    }

    // Pop characters to reverse the string
    std::string reversedString;
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}
