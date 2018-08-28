#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main()
{
    int j = 3;
    int n[MAX] = {5,7,9};
    int *p = NULL;
    int r = 0;

    r = j + r++;
    printf("%d\n", r);
    printf("%d\n", ++r);
    printf("%d\n", r);
    printf("%d\n", r++);
    printf("%d\n", r);
    
    return 0;
}
