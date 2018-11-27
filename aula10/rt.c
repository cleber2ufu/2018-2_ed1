#include <stdio.h>

#define TAMCID 100
#define TAMDATA 100

struct rt{
    char cid[TAMCID];
    float temp;
    char data[TAMDATA];
    struct rt * next;
};
typedef struct rt RT;

int 
main()
{
    RT *rt = (RT *)malloc(sizeof(RT));
    if (rt == NULL)
        return NULL;
}