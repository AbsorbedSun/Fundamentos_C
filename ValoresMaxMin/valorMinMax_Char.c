// Comprobación del valor mínimo y máximo de un tipo de dato

#include<stdio.h>

// Tipo de dato Char
void valorChar(void){
    char num1 = 0x80, num2 = 0x7F;
    unsigned char num3 = 0x00, num4 = 0xFF;

    printf("\nEl valor minimo del tipo CHAR es: %d", num1);
    printf("\nEl valor Maximo del tipo CHAR es: %d", num2);
    printf("\nEl valor minimo del tipo UNSIGNED es: %d", num3);
    printf("\nEl valor Maximo del tipo UNSIGNED es: %d", num4);

}

// Tipo de dato short o corto
void valorShort(){
    short num1 = 0x8000, num2 = 0x7FFF;
    unsigned short num3 = 0x0000, num4 = 0xFFFF;

    printf("\nEl valor minimo del tipo SHORT es: %d", num1);
    printf("\nEl valor Maximo del tipo SHORT es: %d", num2);
    printf("\nEl valor minimo del tipo SHORT UNSIGNED es: %d", num3);
    printf("\nEl valor Maximo del tipo SHORT UNSIGNED es: %d", num4);
}

// Función principal
int main(){
    printf("\nValores de un tipo Char:\n");
    valorChar();
    printf("\nValores de un tipo Short:\n");
    valorShort();

    return 0;
}