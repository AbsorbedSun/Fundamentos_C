#include <stdio.h>

int main() {
    unsigned char num = 0x73, num2 = 0x45, num3 = 0xAA;
    unsigned char opAND, opOR, opXOR, complemento, desplazamientoDerecha, desplazamientoIzquierda;

    opAND = num & num2;
    opOR = num | num2;
    opXOR = num ^ num2;
    complemento = ~num3;
    desplazamientoDerecha = num >> 4;
    desplazamientoIzquierda = num << 4;

    printf("\nPara el ejemplo de los operadores de Movimiento de Bits usaremos\n");
    printf("el número %d y el número %d\n", num, num2);

    printf("\nAplicando el operador AND: %.2x\n", opAND);
    printf("Aplicando el operador OR: %.2x\n", opOR);
    printf("Aplicando el operador XOR: %.2x\n", opXOR);
    printf("Aplicando el complemento: %.2x\n", complemento);
    printf("Aplicando el desplazamiento a la derecha: %.2x\n", desplazamientoDerecha);
    printf("Aplicando el desplazamiento a la izquierda: %.2x\n", desplazamientoIzquierda);

    return 0;
}
