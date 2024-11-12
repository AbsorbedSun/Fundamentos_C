#include<stdio.h>

int main(){

    int numero;

    printf("\nIngresa el numero que comenzara la cuenta regresiva");
    printf("\nNumero: ");
    scanf("%d", &numero);

    printf("\nLa cuenta regresiva es: ");
    for(int i = numero; i >= 0; i--){
        printf("\n%d", i);
    }

    return 0;
}