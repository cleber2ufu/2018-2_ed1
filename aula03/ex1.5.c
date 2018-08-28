#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main()
{
    int j = 3;
    int n[MAX] = {5,7,9};
    int *p = NULL;
    int r = 0;

    p = n;
    r = j + *p++;
    printf("%d %d\n", r, *p);
    
    return 0;
}
