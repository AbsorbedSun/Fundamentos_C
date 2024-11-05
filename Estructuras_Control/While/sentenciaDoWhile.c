#include<stdio.h>

int main(){

    char letra, nombre[50];
    int i = 1;

    do{
        printf("\nInserta el nombre %d:", i);
        gets(nombre);
        printf("\n¿Deseas insertar otro nombre? s/n");
        letra = getchar();
        getchar();
        i++;

    } while (letra == 's' || letra == 'S');

    return 0;

}

