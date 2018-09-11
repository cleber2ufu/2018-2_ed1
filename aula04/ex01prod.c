#include <stdio.h>

/**
 * A função verifica se todos caracters são números.
 * Retorna 1 se todos sao números;
 * Retorna 0, caso contrário
*/
int 
allDigit(char *n);

/**
 * Função verifica os parâmetros de entrada 
 * Retorna 1 se não verifica argumentos
*/
int
checkArgs(int argc, char *args[]);

/**
 * Função retorna o produtos de 2 inteiros;
*/
int
prod(int x, int y);

int 
main(int argc, char *args[])
{
    int resp = 0;
    int res = checkArgs(argc, args);
    if (res == 0){
        printf("\nVerifique os parâmetros de lançamento.\n");
        return 0;
    }

    resp = 

    printf("\n");
    return 0;
}

int 
checkArgs(int argc, char *args[])
{
    int i = 0;
    if (argc == 1) {
        printf("Não foi informado os parâmetros.\n");
        return 0;
    }
    for(i=1; i < argc; i++){
        printf("\nVerificando %s...", args[i]);
        if (allDigit(args[i]) == 0) {
            return 0;
        }
    }
    return 1;
}

int 
allDigit(char *n)
{
    int i = 0;
    for (i = 0; n[i] != '\0'; i++){
        if (!isdigit (n[i]) ) {
            printf("Caracter '%c' não é digito.\n", n[i]);
            return 0;
        }
    }
    printf("\n");
    return 1;
}

int
prod(int x, int y)
{
    return atoi(x) * atoi(y);
}