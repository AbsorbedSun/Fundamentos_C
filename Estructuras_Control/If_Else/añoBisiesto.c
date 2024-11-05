#include<stdio.h>

int main(){
    int año;
    printf("\nIngresa el año de tu preferencia para saber si es bisiesto.");
    printf("\nAño: ");
    scanf("%d", &año);

    if((año % 4 == 0) && (año % 100 != 0) || (año % 400 == 0)){
        printf("\nEl año es bisiesto");
    } else{
        printf("\nEl año NO es bisiesto");
    }

    return 0;
}