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

    
    // Programa 2
    int variable1 = 1, variable2 = 2;

    int *ptr[3];

    ptr[0]=&variable1; // Apunta a la variable 1
    ptr[1]=&variable2;
    ptr[2]=NULL;

    printf("%d\n", *ptr[0]);
    printf("%d\n", *ptr[1]);

    
    // Programa 3
    int array[3] = {1,2,3};
    int (*p1)[3]= &array;
    printf("%d %d %d \n", (*p1)[0], (*p1)[1], (*p1)[2]); // 1 2 3

    return 0;
}