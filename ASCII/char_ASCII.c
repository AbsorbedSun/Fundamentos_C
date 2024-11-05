// Programa que convierte una variable char en codigo ASCII

#include<stdio.h>

int main(){

    unsigned char mayuscula = 'A';

    // Letra en mayuscula
    printf("\nLa representacion de la letra - A - en ASCII es: %d", mayuscula);

    // Conversion
    printf("\nLa letra - a - se puede obtener con: A = %d + 32 = 97 en ASCII = %c\n\n", mayuscula, ("%d", mayuscula)+32);


    return 0;
}