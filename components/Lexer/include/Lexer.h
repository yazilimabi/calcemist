#ifndef LEXER_H
#define LEXER_H

#include <string>

class Lexer {
public:
    Lexer(const std::string& input);
    void printInput() const;

private:
    std::string inputString;
};

#endif
