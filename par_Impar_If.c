#include<stdio.h>

int main(){

    int num;
    printf("\nIngrese un numero para saber si es par o impar");
    printf("\nNumero: ");
    scanf("%d", &num);

    if((num%2) == 0){
        printf("\nEl número %d es Par", num);
    } else{
        printf("\nEl número %d es Impar", num);   
    }

    return 0;
}