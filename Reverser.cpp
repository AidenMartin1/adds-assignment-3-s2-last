
#include <iostream>
#include <string>
#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    static int reversedNum = 0;
    static int basePosition = 1;
    
    if (value < 0) {
        return -1;
    } else if (value > 0) {
        int digit = value % 10;
        reversedNum = reversedNum * 10 + digit;
        basePosition *= 10;
        return reverseDigit(value / 10);
    }
    
    int result = reversedNum;
    reversedNum = 0; // Reset static variables for future calls
    basePosition = 1;
    return result;
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) {
        return "";
    } else {
        return reverseString(characters.substr(1)) + characters[0];
    }
}



