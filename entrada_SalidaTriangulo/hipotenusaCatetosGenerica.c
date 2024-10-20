/*Programa que calcula la hipotenusa, el area y el perimetro de un triangulo
regular a partir de sus catetos*/

#include<stdio.h>
#include<math.h>

// Entrada de datos en 1 sola linea
float entradaUna(){
    float cateto1, cateto2, hipotenusa, area, perimetro;

    // Cambia esta linea de scanf
    fprintf(stdout, "\nIngresa el valor del primer cateto seguido del segundo cateto:");
    fscanf(stdin, "%f %f", &cateto1, &cateto2);

    // Calular la hipotenusa
    hipotenusa = pow(pow(cateto1,2) + pow(cateto2,2), 0.5);

    // Calcular el area
    area = (cateto1 * cateto2)/2.0;

    // Calcular el perimetro
    perimetro = cateto1 + cateto2 + hipotenusa;

    // Exibir los resultados de salida generica
    fprintf(stdout, "\nVersion con fprintf y fscanf");
    fprintf(stdout, "\nLa hipotenusa es: %.2f", hipotenusa);
    fprintf(stdout, "\nEl area es: %f", area);
    fprintf(stdout, "\nEl perimetro es: %f", perimetro);
}


// Entrada de datos convencional
float entradaConvencional(){
    float cateto1, cateto2, hipotenusa, area, perimetro;

    fprintf(stdout, "\nIngresa el valor del primer cateto:");
    fscanf(stdin, "%f", &cateto1);
    fprintf(stdout, "Ingresa el valor del segundo cateto:");
    fscanf(stdin, "%f", &cateto2);

    // Calular la hipotenusa
    hipotenusa = pow(pow(cateto1,2) + pow(cateto2,2), 0.5);

    // Calcular el area
    area = (cateto1 * cateto2)/2.0;

    // Calcular el perimetro
    perimetro = cateto1 + cateto2 + hipotenusa;

    // Exibir los resultados de salida generica
    fprintf(stdout, "\nVersion con fprintf y fscanf");
    fprintf(stdout, "\nLa hipotenusa es: %.2f", hipotenusa);
    fprintf(stdout, "\nEl area es: %f", area);
    fprintf(stdout, "\nEl perimetro es: %f", perimetro);
}

int main(){
    int opc;

    printf("\n Selecciona que entrada de datos prefieres: ");
    printf("\n 1.- Comprimida 1 sola linea");
    printf("\n 2.- Convencional\n");
    scanf("%i", &opc);

    if(opc == 1){
        entradaUna();
    } else if(opc == 2){
        entradaConvencional();
    } else{
        printf("Selecciona una de las opciones del menu. Vuelve a intentarlo.");
    }

    return 0;
}
