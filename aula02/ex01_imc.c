/*
    Programa para calcular o IMC (Índice de Massa Corporal)
*/
#include <stdio.h>

int main(){

    char classificacao[4];

    classificacao[0] = "Abaixo do peso";
    classificacao[1] = "Normal";
    classificacao[2] = "Acima do peso";
    classificacao[3] = "Obesidade";

    int i;

    i = 0;
    for(i; i < sizeof(classificacao); i++)
    {
        printf("...%d...", classificacao[i]);
    }

    return 0;
    

    
}