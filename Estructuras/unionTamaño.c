#include <stdio.h>

union Udatos { 
    char Udat_chat[32];
    short int Udat_sint[20];
    int Udat_int[10];
    long Udat_long;
    double Udat_double[10];
};

int main() {

    union Udatos Uprimer_dato; 
    union Udatos Uvarios_datos[10];

    printf("\nTamaños en estructuras\n");

    printf("\n<mis_datos_s> tiene un tamaño de %zd bytes", 
        sizeof(union Udatos));
    printf("\n<primer_dato> tiene un tamaño de %zd bytes", 
        sizeof(Uprimer_dato));
    printf("\n<varios_datos[0]> tiene un tamaño de %zd bytes", 
        sizeof(Uvarios_datos[0]));
    printf("\n<varios_datos> tiene un tamaño de %zd bytes\n\n", 
        sizeof(Uvarios_datos));  

    printf("\nNumero de elementos en <varios_datos>: %zd \n\n", 
        sizeof(Uvarios_datos) / sizeof(Uvarios_datos[0]));    

    printf("Tipo CHAR tiene un valor de 1 byte. Este arreglo es de tipo Char con 32 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(Uprimer_dato.Udat_chat));
    printf("Tipo SHORT tiene un valor de 2 byte. Este arreglo es de tipo Int con 20 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(Uprimer_dato.Udat_sint));
    printf("Tipo INT tiene un valor de 4 byte. Este arreglo es de tipo Int con 10 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(Uprimer_dato.Udat_int));
    printf("Tipo LONG tiene un valor de 4 byte. Tiene tamaño de %zd bytes\n", 
        sizeof(Uprimer_dato.Udat_long));
    printf("Tipo DOUBLE tiene un valor de 8 byte. Este arreglo es de tipo Int con 10 elementos, tiene tamaño de %zd bytes\n", 
        sizeof(Uprimer_dato.Udat_double));

    return 0;
}
