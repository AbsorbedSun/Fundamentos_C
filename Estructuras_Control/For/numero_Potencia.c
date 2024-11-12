#include<stdio.h>

int main(){

    int numero, potencia, resultado = 1;

    printf("\nIngresa un numero y la potencia que desees: ");
    printf("\nNumero: ");
    scanf("%d", &numero);
    printf("Potencia: ");
    scanf("%d", &potencia); 

    for (int i = 1; i <= (potencia); i++){
        resultado = resultado * numero;
    }
    
    printf("\nEl resultado de %d elevado a %d, es igual a: %d", numero, potencia, resultado);

    return 0;
}
