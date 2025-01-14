#include <stdio.h>

int main(){

    int i = 5;
    int x = i;
    x++;

    printf("Variable i: %d, Variable x: %d\n", i, x);

    int *puntero;
    puntero =&i;
    *puntero = *puntero + 1;

    printf("Variable i: %d, Variable x: %d\n\n", i, *puntero);

    return 0;
}