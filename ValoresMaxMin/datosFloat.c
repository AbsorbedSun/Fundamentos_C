// Como se almacenan los datos en un tipo flotante

#include<stdio.h>

int main(){
    float num = 118.625;
    // Apuntador
    char *p;
    // Asignar el apuntador al valor de memoria de una variable
    p-&num;

    printf("\nByte 0: %.2x",*(p+0));
    printf("\nByte 1: %.2x",*(p+1));
    printf("\nByte 2: %.2x",*(p+2));
    printf("\nByte 3: %.2x",*(p+3));

    return 0;
}