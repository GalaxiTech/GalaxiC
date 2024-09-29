#pragma once

#include <unordered_map>
#include <iostream>
#include "Tokens.h"

class Tokenizer{
public:

    inline Tokenizer(const std::string& content) : content(content) {}

    std::vector<Token> Tokenize();

private:

    // Will have more tokens in the future
    std::unordered_map<std::string, TokenType> token_map = {
            {"exit", TokenType::exit},
    };

    const std::string content;
};