#include <stdio.h>
#include <stdlib.h>

int main(){

    int arreglo[10];
    int *puntero;

    // Agrega al arreglo valores de 10 en 10
    for(int i = 0; i < 10; i++){
        // arreglo[i] = i*10;
        *(arreglo + i) = i*10;
    }

    //Toma el valor de la ubicacion indicada en el arreglo
    puntero = arreglo + 6; // Se asigana la direccion del quinto elemento

    printf("%d\n", *puntero); // 60
    // Despliega el valor que se encuentra en la posicion indicada del arreglo
    printf("%d\n", arreglo[4]); // 40

    return 0;
}