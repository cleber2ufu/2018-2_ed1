#include <stdio.h>

#include "soi.h"

void loadSet(SOI soi, FILE *f);
int allDigit (char *s);

int
main(int argc, char *argv[])
{
    SOI a = NULL;
    FILE *f = NULL;

    a = setCreate();

    f = fopen(argv[1], "r");
    
    loadSet(a,f);

    fclose(f);

    setShow(a);

    setErase(a);

    return 0;

}

void 
loadSet(SOI soi, FILE *f)
{
    int c = NULL;
    int i = 0;
    int j = 0;
    char num[10];

    while(!feof (f))
    {
        c = fgetc(f);
        if (c != ' ')
        {
            num[i] = c;            
        } 
        else 
        {
            printf("%s\n", num);
            for(j = 0; j < sizeof(num); j++){
                num[j] = NULL;
            }
            i = 0;

        }
    }

}

// allDigit
// --------
// Retorna 1 se todos os caracteres em s são numéricos;
// retorna 0, caso contrário.

int
allDigit (char *s) 
{
   int i = 0;
   for (i = 0; s[i] != '\0'; i++)
      if ( !isdigit (s[i]) )
         return 0;

   return 1;
}