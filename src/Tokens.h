#pragma once

#include <vector>
#include <string>

enum class TokenType{
    exit, expr_open, expr_close, semi
};

struct Token{
    TokenType type;
    std::string value;
};