#include "Lexer.h"
#include <iostream>

Lexer::Lexer(const std::string& input) : inputString(input) {}

void Lexer::printInput() const {
    std::cout << "Lexer Input: " << inputString << std::endl;
}
