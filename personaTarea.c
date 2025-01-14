#include <stdio.h>

// Definición de la estructura Datos
struct Datos {
    char nombre[50];
    int edad;
    char genero;
    char telefono[15];
};

// Definición de la estructura Direccion
struct Direccion {
    char calle[50];
    int numero;
    char colonia[50];
    char alcaldia[50];
    int codigo_postal;
};

// Definición de la estructura RedSocial
struct RedSocial {
    char facebook[50];
    char twitter[50];
    char instagram[50];
    char otra[50];
};

// Definición de la unión ID
union ID {
    int matricula;
    int numero_docente;
    int numero_administrativo;
};

// Definición de la estructura Persona
struct Persona {
    struct Datos datos_personales;
    struct Direccion direccion;
    struct RedSocial redes_sociales;
    union ID identificacion;
    int tipo_id; // 1: Matricula, 2: Numero Docente, 3: Numero Administrativo
};

// Función para imprimir la información de una persona
void imprimirPersona(struct Persona p) {
    printf("->Datos personales\n");
    printf("Nombre: %s\n", p.datos_personales.nombre);
    printf("Edad: %d\n", p.datos_personales.edad);
    printf("Genero: %c\n", p.datos_personales.genero);
    printf("Telefono: %s\n", p.datos_personales.telefono);

    printf("\n->Direccion\n");
    printf("Calle: %s, Numero: %d\n", p.direccion.calle, p.direccion.numero);
    printf("Colonia: %s, Alcaldia: %s\n", p.direccion.colonia, p.direccion.alcaldia);
    printf("Codigo Postal: %d\n", p.direccion.codigo_postal);

    printf("\n->Redes sociales\n");
    printf("Facebook: %s\n", p.redes_sociales.facebook);
    printf("Twitter: %s\n", p.redes_sociales.twitter);
    printf("Instagram: %s\n", p.redes_sociales.instagram);
    printf("Otra: %s\n", p.redes_sociales.otra);

    printf("\n->Identificacion\n");
    switch (p.tipo_id) {
        case 1:
            printf("Matricula: %d\n", p.identificacion.matricula);
            break;
        case 2:
            printf("Numero de Docente: %d\n", p.identificacion.numero_docente);
            break;
        case 3:
            printf("Numero Administrativo: %d\n", p.identificacion.numero_administrativo);
            break;
        default:
            printf("Tipo de identificacion desconocido\n");
            break;
    }
}

// Funcion-Estructura para inicializar las estructuras
struct Persona inicializacionEstructura() {
    struct Datos datos_personales = {"Aldo", 25, 'M', "5551234567"};
    struct Direccion direccion = {"Calle Falsa", 123, "Colonia Centro", "Alcaldia Norte", 54321};
    struct RedSocial redes_sociales = {"aldo_fb", "@aldo_tw", "aldo_insta", "aldo_otra"};
    union ID identificacion;
    identificacion.matricula = 123456;

    struct Persona persona = {datos_personales, direccion, redes_sociales, identificacion, 1};
    
    return persona;  // Retornar la estructura inicializada
}


int main() {
    struct Persona persona = inicializacionEstructura();

    // Imprimir la información de la persona
    printf("\n\nInformacion de la persona:\n");
    imprimirPersona(persona);

    return 0;
}
