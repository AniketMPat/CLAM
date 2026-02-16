#include "CPPParserBaseVisitor.h"
#include "CPPLexer.h"
#include "CPPParser.h"
#include "CPPParserVisitor.h"

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
    ClamParser::CPPLexer lexer(&afs);
    antlr4::CommonTokenStream tokens(&lexer);
    ClamParser::CPPParser parser(&tokens);

    // Get the root of the parse tree. Use your base rule name.
    antlr4::tree::ParseTree *tree = parser.translationUnit();

    std::cout << "Parse tree:\n" << tree->toStringTree(&parser) << std::endl;
    // MyVisitor visitor;
    // visitor.visit(tree);

    std::ofstream os(argv[2]);

    return 0;
}
