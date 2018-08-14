#include <stdio.h>


int main (int argc, char *argv[]){

    printf("\n-----------INICIO-----------\n\n");

    int i = argc - 1;

    for (i; i > 0; i--){
        if (i > 1) {
            printf("%s, ", argv[i]);
        } else  if (i = 1){
            printf("%s\n", argv[i]);
        }
    }
    


    printf("\n------------FIM------------\n\n");
    return 0;
}