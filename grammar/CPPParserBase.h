#pragma once

#include "antlr4-runtime.h"

class CPPParserBase : public antlr4::Parser {
public:
    CPPParserBase(antlr4::TokenStream *input) : Parser(input) { }
    bool IsPureSpecifierAllowed();
};
