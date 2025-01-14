#include <stdio.h>
#include <string.h>

// 1. Definir la estructura cuenta bancaria
struct Cuenta {
    char titular[50];
    int numeroCuenta;
    float saldo;
};

// 2. Función de paso por valor
void transaccionPorValor(struct Cuenta cuenta, float monto) {
    float saldoOriginal = cuenta.saldo;
    cuenta.saldo += monto;
    printf("\nTransacción por valor:");
    printf("\nSaldo original: %.2f", saldoOriginal);
    printf("\nLa cuenta permanece con el mismo saldo: %.2f\n", cuenta.saldo);
}

// 3. Función de paso por referencia
void transaccionPorReferencia(struct Cuenta *cuenta, float monto) {
    float saldoOriginal = cuenta->saldo;
    cuenta->saldo += monto;
    printf("\nTransacción por referencia:");
    printf("\nSaldo original: %.2f", saldoOriginal);
    printf("\nNuevo saldo: %.2f\n", cuenta->saldo);
}

// Función simplificada para ordenar cuentas
void ordenarCuentas(struct Cuenta cuentas[], int numCuentas, int ascendente) {
    // Para cada posición del arreglo
    for (int i = 0; i < numCuentas - 1; i++) {
        // Comparar con el resto de elementos
        for (int j = 0; j < numCuentas - 1; j++) {
            // Si queremos orden ascendente
            if (ascendente) {
                // Si el elemento actual es mayor que el siguiente
                if (cuentas[j].saldo > cuentas[j + 1].saldo) {
                    // Intercambiamos las cuentas
                    struct Cuenta temporal = cuentas[j];
                    cuentas[j] = cuentas[j + 1];
                    cuentas[j + 1] = temporal;
                }
            } 
            // Si queremos orden descendente
            else {
                // Si el elemento actual es menor que el siguiente
                if (cuentas[j].saldo < cuentas[j + 1].saldo) {
                    // Intercambiamos las cuentas
                    struct Cuenta temporal = cuentas[j];
                    cuentas[j] = cuentas[j + 1];
                    cuentas[j + 1] = temporal;
                }
            }
        }
    }
}

int main() {
    int numUsuarios;
    printf("\n\n¿Cuántos usuarios desea introducir? ");
    scanf("%d", &numUsuarios);
    
    struct Cuenta cuentas[numUsuarios];
    
    // 4. Solicitar entrada de usuarios
    for (int i = 0; i < numUsuarios; i++) {
        printf("\nDatos para la cuenta %d:\n", i + 1);
        printf("Nombre del titular: ");
        scanf(" %[^\n]s", cuentas[i].titular); // %[^\n]s - Formato que lee todo hasta un salto de linea
        printf("Número de cuenta: ");
        scanf("%d", &cuentas[i].numeroCuenta);
        printf("Saldo inicial: ");
        scanf("%f", &cuentas[i].saldo);
    }
    
    // 5. Llamadas a las funciones
    float montoTransaccion;
    printf("\nIngrese el monto de la transacción: ");
    scanf("%f", &montoTransaccion);
    
    // 6. Mostrar resultados
    for (int i = 0; i < numUsuarios; i++) {
        printf("\nCuenta %d - Antes de transacciones:", i + 1);
        printf("\nTitular: %s", cuentas[i].titular);
        printf("\nSaldo: %.2f\n", cuentas[i].saldo);
        
        transaccionPorValor(cuentas[i], montoTransaccion);
        transaccionPorReferencia(&cuentas[i], montoTransaccion);
    }
    
    // Ordenamiento
    int opcionOrden;
    printf("\n¿Cómo desea ordenar las cuentas?");
    printf("\n1. Descendente");
    printf("\n2. Ascendente");
    printf("\nElija una opción (1 o 2): ");
    scanf("%d", &opcionOrden);
    
    ordenarCuentas(cuentas, numUsuarios, opcionOrden == 1);
    
    printf("\nCuentas ordenadas por saldo:");
    for (int i = 0; i < numUsuarios; i++) {
        printf("\n%s: %.2f", cuentas[i].titular, cuentas[i].saldo);
    }
    
    return 0;
}