#include <stdio.h>

int 
main()
{
    char *linha;
    printf("Digite uma frase: ");
    scanf("%s", linha);
    printf("%s\n", linha);

    /*

    while(scanf("%s", linha) != EOF)
    {
        printf("%s\n", linha);
    }
    */

    printf("%s", "programa finalizado!");
    return 0;
}