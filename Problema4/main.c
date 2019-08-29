#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas, i, j, opcion, quefila, quecolumna, sumafilas = 0, sumacolumnas = 0;

    printf("Ingrese el numero de filas que tendra la matriz: ");
    scanf("%i", &filas);

    printf("Ingrese el numero de columnas que tendra la matriz: ");
    scanf("%i", &columnas);

    int matriz[filas][columnas];

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese el valor en matriz[%i][%i]", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("¿Que desea sumar? 1. Fila 2.Columna");
    scanf("%i", &opcion);

    if (opcion == 1) {

        printf("¿Que fila desea sumar?: ");
        scanf("%i", &quefila);

        for (j = 0; j < columnas; j++) {
            sumafilas += matriz[quefila - 1][j];

        }
        printf("La sumatoria de la fila seleccionada es: %i", sumafilas);

    } else if (opcion == 2) {
        printf("¿Que columna desea sumar?: ");
        scanf("%i", &quecolumna);

        for (i = 0; i < filas; i++) {

            sumacolumnas += matriz[i][quecolumna-1];

        }
        printf("La sumatoria de la columna seleccionada es: %i", sumacolumnas);

    } else {
        printf("Opcion seleccionada invalida");
    }

    return 0;
}