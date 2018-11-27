#include <stdio.h>

void exch (void *a, void *b, int s)
{
    void *t = (int) malloc (s);
    memcpy(t, a, s);
    memcpy(a, b, s);
    memcpy(b, t, s);
}

int
main()
{
    int  i = 5;
    int j = 7;
    
    printf("i = %d e j= %d\n\n", i, j);

    exch(&i, &j, (unsigned)  sizeof(int));

    printf("i = %d e j= %d\n\n", i, j);
    printf("sizeof(int)    = %u\n", (unsigned) sizeof(int));
    printf("sizeof(char)   = %u\n", (unsigned) sizeof(char));
    printf("sizeof(float)  = %u\n", (unsigned) sizeof(float));
    printf("sizeof(double) = %u\n", (unsigned) sizeof(double));

    return 0;

}