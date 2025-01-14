#include <stdio.h>

struct datos { 
    char dat_chat[32];
    short int dat_sint[20];
    int dat_int[10];
    long dat_long;
    double dat_double[10];
};

int main() {

    struct datos primer_dato; 
    struct datos varios_datos[10];

    printf("\nTamaños en estructuras\n");

    printf("\n<mis_datos_s> tiene un tamaño de %zd bytes", 
        sizeof(struct datos));
    printf("\n<primer_dato> tiene un tamaño de %zd bytes", 
        sizeof(primer_dato));
    printf("\n<varios_datos[0]> tiene un tamaño de %zd bytes", 
        sizeof(varios_datos[0]));
    printf("\n<varios_datos> tiene un tamaño de %zd bytes\n\n", 
        sizeof(varios_datos));  

    printf("\nNumero de elementos en <varios_datos>: %zd \n\n", 
        sizeof(varios_datos) / sizeof(varios_datos[0]));    

    printf("Tipo CHAR tiene un valor de 1 byte. Este arreglo es de tipo Char con 32 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(primer_dato.dat_chat));
    printf("Tipo SHORT tiene un valor de 2 byte. Este arreglo es de tipo Int con 20 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(primer_dato.dat_sint));
    printf("Tipo INT tiene un valor de 4 byte. Este arreglo es de tipo Int con 10 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(primer_dato.dat_int));
    printf("Tipo LONG tiene un valor de 4 byte. Tiene tamaño de %zd bytes\n", 
        sizeof(primer_dato.dat_long));
    printf("Tipo DOUBLE tiene un valor de 8 byte. Este arreglo es de tipo Int con 10 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(primer_dato.dat_double));

    return 0;
}
