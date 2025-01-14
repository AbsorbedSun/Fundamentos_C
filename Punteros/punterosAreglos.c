#include <stdio.h>
#include <stdlib.h>

int main(){

    int variable1 = 1, variable2 = 2;

    int *ptr[3];

    ptr[0]=&variable1; // Apunta a la variable 1
    ptr[1]=&variable2;
    ptr[2]=NULL;

    printf("%d\n", *ptr[0]);
    printf("%d\n", *ptr[1]);
    
    return 0;
}