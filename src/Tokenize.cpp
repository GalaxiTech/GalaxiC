#include "Tokenize.h"

std::vector<Token> Tokenizer::Tokenize() {
    std::vector<Token> tokens;
    std::string buffer = "";

    for(char c : content){
        if(c == ' ' || c == '(' || c == ')' || c == ';'){
            if(token_map.find(buffer) != token_map.end()){
                // The buffer exists in the token map
                tokens.emplace_back(Token{token_map[buffer]});
            }

            buffer.clear();
        }
        else{
            buffer += c;
        }
    }

    return tokens;
}
