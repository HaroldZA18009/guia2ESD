#include <stdio.h>
#define filas 2
#define columnas 2
int main(){
    int matriz[filas][columnas];
    int i, j, x, y, aux;
    
    //Llenar el arreglo
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese numero para [%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }
    
    //Imprimiendo Matriz
    
    printf("Matriz Desordenada\n");
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz[i][j]);
        }
        printf("\n");
    }
    
    //Ordenador la matriz
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            for(x=0;x<filas;x++) {
                for(y=0;y<columnas;y++){
                    if(matriz[i][j]>matriz[x][y]){
                        aux = matriz[x][y];
                        matriz[x][y] = matriz[i][j];
                        matriz[i][j] = aux;
                    }
                }
            }
        }
    }
    
    printf("\nMatriz Ordenada\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %i ",matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}