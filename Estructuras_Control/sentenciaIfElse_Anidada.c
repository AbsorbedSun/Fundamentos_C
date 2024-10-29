// Programa que ...

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main(){
    int velocidad = 0;
    char opc;

    while (true){

        printf("\n Ingresa la velocidad del vehiculo: ");
        scanf("%i", &velocidad);

        if(!velocidad){
            printf("\n Ingresa una cantidad numerica\n");
            
        } else {
            if(velocidad <= 60){
                printf("\n El consumo es de 12km/lt\n");
            } else if(velocidad >= 61 && velocidad <= 90){
                printf("\n El consumo es de 15km/lt\n");
            } else if(velocidad >= 91 && velocidad <= 120){
                printf("\n El consumo es de 10km/lt\n");
            } else if(velocidad >= 121 && velocidad <= 240){
                printf("\n El consumo es de 8km/lt\n");
            } else{
                printf("\n El consumo es menor, casi despreciable\n");
            }
        }

        printf("\n ¿Desea intenar nuevamente? s/n");
        scanf("%s", &opc);

        if(opc == 'n'){
            break;
        }
    }

    return 0;
}