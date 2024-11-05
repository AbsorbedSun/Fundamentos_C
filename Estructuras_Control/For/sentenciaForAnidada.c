// Sentencia For Anidada - Contado de incremento
#include<stdio.h>

int main(){

    int filas, columnas;

    printf("\nIngrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    for (int i = 1; i <= filas; i++){
        for (int j = 1; j <= columnas; j++){
            printf("\nFila: %d Columna: %d", i, j);
        }
    }

    return 0;
}