#include<stdio.h>

void funcion1();
float funcion2 (int a, int b);

int main(){
    printf("Funcion1: ");
    funcion1();
    
    printf("Funcion2: ");
    printf("%f\n", funcion2(5,1));
    return 0;
}

void funcion1(){
    printf("Hola mundo\n");
}

float funcion2(int a, int b){
    return a/b;
}