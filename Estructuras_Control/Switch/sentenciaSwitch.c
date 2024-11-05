#include<stdio.h>

int main(){

    int calificacion = 0;
    printf("\n Ingresa la calificacion: ");
    scanf("%d", &calificacion);

    switch (calificacion){
        case 10:
            printf("\n Excelente califiación.");    
            break;
        case 9: 
            printf("\nMuy buena calificación.");    
            break;
        case 8: 
            printf("\nBuena calificación.");    
            break;
        case 7: 
            printf("\nSigue mejorando, no te rindas.");    
            break;
        case 6: 
            printf("\nSuficiente para aprobar.");    
            break;
        
        default:
            printf("\n La calificacion es insuficiente para aprobar");
            break;
    }
    return 0;
}