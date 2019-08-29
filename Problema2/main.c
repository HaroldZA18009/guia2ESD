#include <stdio.h>

int main(){
    int filas, columnas, i, j;
    
    printf("Coloque las filas que tendra la matriz: ");
    scanf("%i",&filas);

    printf("Coloque las columnas que tendra la matriz: ");
    scanf("%i",&columnas);
    
    
    //Dimensionando Matrices
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int sumar[filas][columnas];
    //Llenando primera matriz
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese valor de matriz1 [%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz1[i][j]);
        }
    }
    //Mostrando primera matriz
     for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz1[i][j]);
        }
        printf("\n");
    }
    
    //Llenando segunda matriz
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese valor de matriz2 [%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz2[i][j]);
        }
    }
    
    //Mostrando la segunda matriz
    
    printf("\nMostrando Primera Matriz\n");
     for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz2[i][j]);
        }
        printf("\n");
    }
    
    //Sumando las matrices
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            sumar[i][j]= matriz1[i][j] + matriz2[i][j];
        }
    }
 
    //Mostrando la suma
    printf("Sumatoria es: \n");
    
     for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",sumar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}