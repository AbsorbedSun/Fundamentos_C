#include<stdio.h>

int main(){

    int dia;
    printf("\nPor favor ingrese un numero del 1 al 7 para saber a que dia de la semana corresponde.");
    printf("\nNumero: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("El día de la semana es: Lunes\n");
            break;
        case 2:
            printf("El día de la semana es: Martes\n");
            break;
        case 3:
            printf("El día de la semana es: Miércoles\n");
            break;
        case 4:
            printf("El día de la semana es: Jueves\n");
            break;
        case 5:
            printf("El día de la semana es: Viernes\n");
            break;
        case 6:
            printf("El día de la semana es: Sábado\n");
            break;
        case 7:
            printf("El día de la semana es: Domingo\n");
            break;
        default:
            printf("Número invalido. Por favor ingrese un número entre 1 y 7.\n");
            break;
    }


    return 0;
}