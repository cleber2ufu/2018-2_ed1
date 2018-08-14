#include <stdio.h>

int main(void)
{
    float vteste;
    printf(" — TIPO —|— BYTES —\n");
    int idade = 38;
    printf("idade : %d\n", idade);
    int s = sizeof(idade);
    printf("SizeOf do idade: %d\n", s);
    s = sizeof(char);
    printf(" char …….: %d bytes\n", s);
    /*
    printf(" short…….: %d bytes\n", sizeof(short));
    printf(" int………: %d bytes\n", sizeof(int));
    printf(" long……..: %d bytes\n", sizeof(long));
    printf(" float ……: %d bytes\n", sizeof(float));
    printf(" double……: %d bytes\n", sizeof(double));
    */
    long double billion = 1259638;
    int t = sizeof(billion);
    printf(" long double.: %d bytes\n\n", t);
    /*printf("\nO tamanho de vteste e…: %d \n\n",sizeof(vteste)); */

    return 0;
}