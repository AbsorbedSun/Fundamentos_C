// Como se almacenan los datos en un tipo flotante

#include<stdio.h>

int main(){
    float num = -118.625;
    // Apuntador
    unsigned char*p;
    // Asignar el apuntador al valor de memoria de una variable
    p = (unsigned char*)&num;

    printf("\nByte 0: %02x", *(p+0));
    printf("\nByte 1: %02x", *(p+1));
    printf("\nByte 2: %02x", *(p+2));
    printf("\nByte 3: %02x", *(p+3));

    return 0;
}