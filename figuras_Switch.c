#include <stdio.h>

int main() {
    int opc;
    float medida;  

    printf("Seleccione una opción: ");
    printf("\n1. Cuadrado");
    printf("\n2. Hexágono");
    printf("\n3. Círculo");

    scanf("%d", &opc);  

    switch (opc) {
        case 1:
            printf("\nTeclee la medida de un lado: ");
            scanf("%d", &medida);

            printf("\nSu perímetro es: %.2f", (medida * 4));  
            break;
        
        case 2:
            printf("\nTeclee la medida de un lado: ");
            scanf("%d", &medida);

            printf("\nSu perímetro es: %.2f", (medida * 6));  
            break;

        case 3:
            printf("\nTeclee la medida de su radio: ");
            scanf("%f", &medida);  

            float per = 2 * 3.14159 * medida;  

            printf("\nEl perímetro del círculo con radio %.2f es: %.2f\n", medida, per);  
            break;

        default:
            printf("\nOpción no válida");
            break;
    }

    return 0;
}