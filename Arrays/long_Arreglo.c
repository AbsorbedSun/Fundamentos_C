#include<stdio.h>

int main(){


    int A[5];
    float B[5];
    char C[6];

    A[0] = 6;
    B[0] = 5.6, B[1] = 2.1;
    C[0] = 'C';

    printf("Arreglo A: %d \n", A[0]);
    printf("Arreglo B: %f %f \n", B[0], B[1]);
    printf("Arreglo C: %c \n", C[0]);

    int D[5] = {1,2,3,4,5};
    char E[] = {'h','o','l','a'};
    char F[] = "Arreglo";

    printf("Arreglo D: %d\n", D[2]);
    printf("Arreglo E: %s\n", E);
    printf("Arreglo F: %s\n", F);

    // Tamaño size of...
    printf("\nEL tamaño de E indice 0 es: %d\n", sizeof(E[0]));
    printf("EL tamaño de E es: %d\n", sizeof(E));

    printf("\nEL tamaño de D indice 0 es: %d\n", sizeof(D[0]));
    printf("EL tamaño de D es: %d\n", sizeof(D));

    // Sacar la longitud del arreglo con size of...
    int i = 0;
    int longArreglo = sizeof(D) / sizeof(D[0]);

    printf("\nLA longituda del arreglo D es: %d\n", longArreglo);
    printf("Arreglo D: %d\n", D[0]);

    for (int i = 0; i < longArreglo; i++){
        printf("%d", D[i]);
    }
    
    return 0;
}