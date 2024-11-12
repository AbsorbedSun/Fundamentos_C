#include<stdio.h>

int main(){

    int inicio, fin;

    printf("\nIngresa un rango de numeros: ");
    printf("\nInicio: ");
    scanf("%d", &inicio);
    printf("Fin: ");
    scanf("%d", &fin);

    printf("\nLos numeros pares entre ese rango son:\n");
    for (int i = inicio; i <= fin; i++){
        if((i % 2) == 0){
            printf("%d\n", i);
        }
    }
    

    return 0;
}
