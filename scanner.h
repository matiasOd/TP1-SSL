#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef enum{FDT=0,SPA=1, SEP=2, CAD=3} TOKEN;
typedef struct CADYTOKENS { 
    char cadena[128] ; 
    TOKEN token;
} CADYTOKEN;

CADYTOKEN get_token();

TOKEN map_token(char caracter);


