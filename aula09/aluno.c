#include "aluno.h"
#include <stdio.h>

Aluno* 
create()
{
    Aluno *aluno01 = (Aluno*) malloc(sizeof(Aluno));
    if (aluno01 == NULL){
        printf("Memória insuficiente!\n");
        exit(1);
    }
}