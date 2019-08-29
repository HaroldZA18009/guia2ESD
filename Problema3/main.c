#include <stdio.h>
#include <stdlib.h>

int main(){
    int filas,columnas,i,j,sumatotal=0;
    
    printf("Ingrese el numero de filas que tendra la matriz: ");
    scanf("%i",&filas);
   
    printf("Ingrese el numero de columnas que tendra la matriz: ");
    scanf("%i",&columnas);
    
    int matriz[filas][columnas];
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese valor de la matriz[%i][%i]",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            sumatotal+=matriz[i][j];
        }
    }
    
    printf("La sumatoria total de la matriz es: %i",sumatotal);
    return 0;
}