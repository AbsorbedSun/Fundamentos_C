#include <stdio.h>

int main(){
    int num;
    unsigned long factorial = 1;

    printf("Teclea un número: ");
    scanf("%d", &num);

    if(num < 0)
        printf("\nNo existe factorial de números negativos");
    else{
        for(int i = 1; i <= num; i++){
            factorial *= i;
        }

        printf("\nEl factorial del numero %d es: %lu\n", num, factorial);
    }
    
    return 0;
}