#include<stdio.h>

int main(){

    char letra;

    do{
        letra = getchar();
    } while (letra != 0x0a);

    return 0;
}