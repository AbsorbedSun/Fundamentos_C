#include<string.h>
#include<stdio.h>

int main(){
    char cadena1[50];
    char cadena2[50];
    char espacio[] = " ";

    printf("\nInserta tu nombre: ");
    gets(cadena1);

    printf("\nInserta tus apellidos: ");
    gets(cadena2);

    // Pegar espacio a los nombres
    strcat(cadena1, espacio);
    starcat(cadena1, cadena2);

    printf("\nTu nombre completo es: %s", cadena1);

    return 0;

}