#include "scanner.h"

CADYTOKEN get_token(){
    char caracter;
    int flag=0;
    CADYTOKEN c={"",CAD};
    caracter  = getchar();
    c.token = map_token(caracter);
    switch(c.token){
        case CAD:
            while(c.token==CAD){
                strncat(c.cadena, &caracter, 1);
                caracter  = getchar();
                c.token = map_token(caracter);
            }
            ungetc(caracter,stdin);
            c.token=CAD;
            break;
        case SEP:
            c.cadena[0] = caracter;
            c.cadena[1] = '\0';
            break;
        default:
            break;
    } 
    return c;
}

TOKEN map_token(char caracter){
    if(caracter==',')
        return SEP;
    if(caracter==EOF)
        return FDT;
    if(isspace(caracter)>0)
        return SPA;
    return CAD;    
}