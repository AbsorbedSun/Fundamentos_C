// Variable tipo char

#include<stdio.h>

int main(){
    char letra = 'a';

    printf("\nLa presentacion en ASCII de la letra es: %c",letra);
    printf("\nLa presentacion en decimal de la letra es: %d",letra);
    printf("\nLa presentacion en octal de la letra es: %o",letra);
    printf("\nLa presentacion en hexadecimal de la letra es: %.2x",letra);
    printf("\nLa direccion de memoria que ocupa la letra es: %p",&letra);

    return 0;
}