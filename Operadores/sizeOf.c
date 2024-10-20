// Programa que muestra el tamaño en bits de los diferentes tipos de datos.
#include <stdio.h>

int main() {
    printf("\nEl char tiene un tamaño de %ld bytes", sizeof(char));
    printf("\nEl short tiene un tamaño de %ld bytes", sizeof(short));
    printf("\nEl int tiene un tamaño de %ld bytes", sizeof(int));
    printf("\nEl long tiene un tamaño de %ld bytes", sizeof(long));
    printf("\nEl flotante tiene un tamaño de %ld bytes", sizeof(float));
    printf("\nEl double tiene un tamaño de %ld bytes", sizeof(double));
    printf("\nEl double largo tiene un tamaño de %ld bytes", sizeof(long double));

    return 0;
}
