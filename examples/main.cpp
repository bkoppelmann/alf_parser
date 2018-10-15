#include <iostream>

#include "antlr4-runtime.h"
#include "ALFLexer.h"
#include "ALFParser.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("samplelibrary.alf");

    ANTLRInputStream input(stream);
    ALFLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ALFParser parser(&tokens);

    parser.source_text();
    return 0;
}
