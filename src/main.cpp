#include "CBaseVisitor.h"
#include "CLexer.h"
#include "CParser.h"
#include "CVisitor.h"

// Antlr includes
#include "ANTLRFileStream.h"
#include "CommonTokenStream.h"
#include "tree/ParseTree.h"
#include "tree/ParseTreeWalker.h"

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    if (argc < 3) {
        std::cout
            << "Missing required argument.\n"
            << "Required arguments: <input file path> <output file path>\n";
        return 1;
    }

    // Open the file then parse and lex it.
    antlr4::ANTLRFileStream afs;
    afs.loadFromFile(argv[1]);
    ClamParser::CLexer lexer(&afs);
    antlr4::CommonTokenStream tokens(&lexer);
    ClamParser::CParser parser(&tokens);

    // Get the root of the parse tree. Use your base rule name.
    antlr4::tree::ParseTree *tree = parser.file();

    // MyVisitor visitor;
    // visitor.visit(tree);

    std::ofstream os(argv[2]);

    return 0;
}
