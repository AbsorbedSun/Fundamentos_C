#include<stdio.h>

int main(){

    int datos[3][4] = {{1,2,3,4}, {2,4,6,8}, {3,6,9,12}};
    for (int i = 0; i < 3; i++){
        printf("Fila %d:", i + 1);
        for (int j = 0; j < 4; j++){
            printf("\t %d", datos[i][j]);
        }
        printf("\n");
    }

    return 0;
}