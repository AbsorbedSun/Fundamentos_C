#include<stdio.h>
#include<string.h>

int main(){

    // Definir las cadenas originales
    char s1[20] = "Holaaa, Diego!";
    char s2[] = "¡Hola!";

    // Mostrar cadenas originales
    printf("Cadena original s1: %s\n", s1);
    printf("Cadena original s2: %s\n", s2);

    // Copiar los primeros bytes de s2 a s1 usando memcpy
    size_t n = strlen(s2);
    memcpy(s1, s2, n);

    // Mostrar el resultado despues de la copia
    printf("Despues de memcpy, s1: %s\n", s1);

    return 0;
}