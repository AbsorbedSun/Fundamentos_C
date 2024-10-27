// Sentencia While - Estructura de control

#include<stdio.h>

int main(){
    int contador = 0;

    while (contador <= 100){
        printf("\n El contador tiene un valor de: %d", contador);
        contador = contador + 10;
    }
        
    return 0;
}