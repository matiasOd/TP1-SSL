#include "scanner.c"


int main(){
    freopen ("entrada.txt","r",stdin);
    CADYTOKEN c={"",CAD};
    
    printf("Salida \n\n");
    do
    {
        c = get_token();
        switch(c.token)
        {
            case SEP:
                printf("Separador: %s\n",c.cadena);
                break;
            case CAD:
                printf("Cadena: %s\n",c.cadena);
                break;
            case FDT:
                printf("Fin de Texto: ");
                break;
        }
    }while(c.token!=FDT);
    return 0;
}