#include <stdio.h>

int
main(){

    int x = 10;
    int *p1, *p2 = NULL;

    printf("Valor de x = %d.\n\n", x);
    printf("Endereco de x = %p\n\n", &x);
    printf("Endereço de p1 = %p\n\n", &p1);
    printf("Endereço de p2 = %p\n\n", &p2);

    printf("p1 armazenará o endereço de x,\n");

    p1 = &x;

    printf("Portanto endereço p1 = %p e o valor = %d.\n\n", &*p1, *p1);




    return 0;
}