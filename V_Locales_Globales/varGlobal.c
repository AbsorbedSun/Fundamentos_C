#include<stdio.h>

void funcion1();

int global_A = 5;

int main(){

    int local = 10;
    printf("%d\n", local);

    funcion1();
    printf("La variable global tiene valor: %d\n", global_A);

    return 0;
}

void funcion1(){
    int local = 8;
    printf("%d\n", local);

    printf("La variable global tiene valor: %d\n", global_A);
    global_A += 10;
}