// Sentencia While Infonita - Estructura de control

#include<stdio.h>
#include<stdbool.h>

int main(){
    int contador = 1, suma = 0;

    while (true){
        suma = suma + contador;
        printf("\n El contador es: %d y la suma es: %d", contador, suma);
        if(suma > 100){
            break;
        }
        contador++;
    }

    return 0;
}