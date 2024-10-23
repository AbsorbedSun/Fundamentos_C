#include <stdio.h>

int main() {
    float num1 = 17.59, num2 = -130.54;

    // Apuntador
    unsigned char *p;

    // Numero 1
    p = (unsigned char*)&num1;
    printf("Bytes de 17.59:\n");
    printf("Byte 0: %02x\n", *(p + 0));
    printf("Byte 1: %02x\n", *(p + 1));
    printf("Byte 2: %02x\n", *(p + 2));
    printf("Byte 3: %02x\n", *(p + 3));

    // Numero 2
    p = (unsigned char*)&num2;
    printf("\nBytes de -130.54:\n");
    printf("Byte 0: %02x\n", *(p + 0));
    printf("Byte 1: %02x\n", *(p + 1));
    printf("Byte 2: %02x\n", *(p + 2));
    printf("Byte 3: %02x\n", *(p + 3));

    return 0;
}
