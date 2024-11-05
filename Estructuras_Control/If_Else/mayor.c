#include<stdio.h>

int main(){
    int num1, num2, num3, mayor;

    printf("\nIngresa tres numeros para descrubrir cual es el mayor de ellos.");
    printf("\nPrimer numero: ");
    scanf("%d", &num1);
    mayor = num1;
    printf("\nEl numero mayor es: %d", mayor);
    
    printf("\nSegundo numero: ");
    scanf("%d", &num2);

    if (mayor > num2){
        mayor = num1;
        printf("\nEl numero mayor es: %d", mayor);
    } else{
        mayor = num2;
        printf("\nEl numero mayor es: %d", mayor);
    }

    printf("\nTercer numero: ");
    scanf("%d", &num3);

    if(mayor < num3){
        mayor = num3;
        printf("\nEl numero mayor es: %d", mayor);
    }

    printf("\nEl numero Final es: %d\n", mayor);
    return 0;
}