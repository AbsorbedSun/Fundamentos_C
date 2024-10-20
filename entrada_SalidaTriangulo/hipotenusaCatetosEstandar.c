/*Programa que calcula la hipotenusa, el area y el perimetro de un triangulo
regular a partir de sus catetos*/

#include<stdio.h>
#include<math.h>

int main(){
    float cateto1, cateto2, hipotenusa, area, perimetro;

    printf("\nIngresa el valor del primer cateto:");
    scanf("%f", &cateto1);
    printf("Ingresa el valor del segundo cateto:");
    scanf("%f", &cateto2);

    // Calular la hipotenusa
    hipotenusa = pow(pow(cateto1,2) + pow(cateto2,2), 0.5);

    // Calcular el area
    area = (cateto1 * cateto2)/2.0;

    // Calcular el perimetro
    perimetro = cateto1 + cateto2 + hipotenusa;

    // Exibir los resultados de salida estandar
    printf("\nLa hipotenusa es: %.2f", hipotenusa);
    printf("\nEl area es: %f", area);
    printf("\nEl perimetro es: %f", perimetro);

    return 0;
}
