#include<stdio.h>
#include<string.h>

int main(){
    char cadena[50] = "No sé que debe ir aquí";
    int ch = "q";

    char *resultado = strchr(cadena, ch);

    if(resultado != NULL){
        printf("\nEl caracter %c, se encontro en la posicion %ld", ch, resultado - cadena);
    } else{
        printf("\nEl caracter %c, No se encontro en la posicion %ld", ch, cadena);
    }

    return 0;

}