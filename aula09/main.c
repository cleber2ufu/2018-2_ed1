#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define MAXS 10

struct soi 
{
    int * s;    // set of integers;
    int n;      // number of elements in the s
};
typedef struct soi SoI;


int
main (int argc, char *argv[])
{
    SoI *s = (SoI *) malloc(sizeof(SoI));
    if (s == NULL) return -1;

    s->s = (int *) malloc (MAXS * sizeof (int));

    if (s->s == NULL)
    {
        free(s);
        return -1;
    }
    s->n = 0;

    free(s->s);
    free(s);

    printf("Concluído!\n");

}

