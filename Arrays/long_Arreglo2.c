#include<stdio.h>

int main(){

    // Declaración
    int A[2][3];

    // Inicialización
    A[0][0] = 1;
    A[0][1] = 2;
    A[0][2] = 3;

    A[1][0] = 2;
    A[1][1] = 4;
    A[1][2] = 6;

    printf("Arreglo A dimension 1: %d%d%d \n", A[0][0], A[0][1], A[0][2]);
    printf("Arreglo A dimension 2: %d%d%d \n", A[1][0], A[1][1], A[1][2]);

    // Declaracion e inicializacion
    int B[2][2] = {{1,2}, {2,4}};
    printf("\nArreglo B dimension 1: %d%d \n", B[0][0], B[0][1]);
    printf("Arreglo B dimension 2: %d%d \n", B[1][0], B[1][1]);

    // Declaración e inicializacion tipo Char
    char C[3][6] = {"Hola1", "Hola2", "Hola3"};
    printf("\nArreglo C dimension 1: %s \n", C[0]);
    printf("Arreglo C dimension 2: %s \n", C[1]);

    // Impresion de arreglos
    int D[5][5] = {{1,2,3,4,5}, {2,4,6,8,10}, {3,6,9,12,15}, {4,6,12,16,20}, {5,10,15,20,25}};

    printf("\nArreglo D: \n");
    for (int i = 0; i < 5; i++){
        printf("Dimension %d:", i + 1);
        for (int j = 0; j < 5; j++){
            printf("\t%d", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}