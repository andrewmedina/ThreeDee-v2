#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

int yylex();

int main(int argc, char **argv)
{
    extern FILE *yyin;
    yyin = fopen(argv[1], "r");
    yylex();
    ASTNode *ast = build_ast();
    printf("Abstract Syntax Tree:\n");
    print_ast(ast, 0);
    return 0;
}
