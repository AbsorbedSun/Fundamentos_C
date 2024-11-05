// Programa que ...

#include<stdio.h>

int main(){
    int velocidad = 0;

    printf("\n Ingresa la velocidad del vehiculo: ");
    scanf("%i", &velocidad);

    if(velocidad <= 80){
        printf("\n El consumo es de 12km/lt");
    } else{
        printf("\n El consumo es de 10km/lt");
    }


    return 0;
}