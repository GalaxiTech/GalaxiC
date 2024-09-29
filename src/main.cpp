#include <iostream>
#include <fstream>
#include <sstream>

#include "Tokenize.h"

struct Arguments{
    std::string input;
    std::string output;
};

Arguments ParseProgramArgs(int argc, char** argv){
    if (argc != 3){
        // Invalid Program Arguments
        std::cerr << "Invalid Program Arguments.\n";
        std::cerr << "Program Arguments should look like this:\n"
                     "Galaxi.exe input_file.gx output_file.asm\n";
        exit(1);
    }

    Arguments args;
    args.input = argv[1];
    args.output = argv[2];

    return args;
}

int main(int argc, char** argv){
    // Parse Program Arguments
    Arguments args = ParseProgramArgs(argc, argv);

    // Read Input File
    std::fstream file(args.input, std::ios::in);
    std::stringstream content;
    content << file.rdbuf();
    file.close();

    // Tokenize
    Tokenizer tokenizer(content.str());
    auto tokens = tokenizer.Tokenize();

    std::cout << "Program Break Point";

    return 0;
}