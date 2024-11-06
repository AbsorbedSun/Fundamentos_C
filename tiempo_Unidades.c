#include <stdio.h>

int main(){
    int num;
    int dias, horas, min, seg;

    printf("\n\nIngresa un número en segundos: ");
    scanf("%d", &num);

    dias = num / (24 * 60 * 60);
    num = num % (24 * 60 *60);

    horas = num / (60 * 60);
    num = num % (60 * 60);

    min = num / 60;

    seg = num % 60;

    printf("\nLos dias son: %d", dias);
    printf("\nLas horas son: %d", horas);
    printf("\nLos minutos son: %d", min);
    printf("\nLos segundos son: %d", seg);

    return 0;
}