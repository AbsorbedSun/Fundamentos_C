#include<stdio.h>
#include<stdbool.h>

int main(){
    int numero1, numero2;
    bool result = true;

    printf("\nVeamos si dos numeros son divisibles.");
    printf("\nNumero 1: ");
    scanf("%i", &numero1);
    printf("Numero 2: ");
    scanf("%i", &numero2);

    if((numero1 % numero2) != 0){
        result = false;
    } else{
        result = true;
    }

    printf("\n¿El numeros %d es divisible sobre el numero %d? \n%s\n", numero1, numero2, result ? "SI es divisible" : "NO es divisible");

    return 0;

}