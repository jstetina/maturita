#include <stdio.h>
#include <stdlib.h>
 
void printMatrix(int m, int n, int arr[][n]){
    for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
    printf("\n");
}

int main(){
    int sizeA_rows;
    int sizeA_columns;

    int sizeB_rows;
    int sizeB_columns;

    printf("Program na nasobeni matic:\n");

    printf("Zadejte rozmery 1. matice:\n");
    printf("Radky: ");
    scanf("%i",&sizeA_rows);
    printf("Sloupce: ");
    scanf("%i",&sizeA_columns);

    printf("\nZadejte rozmery 2. matice:\n");
    printf("Radky: ");
    scanf("%i",&sizeB_rows);
    printf("Sloupce: ");
    scanf("%i",&sizeB_columns);

    int matrixA[sizeA_rows][sizeA_columns];
    int matrixB[sizeB_rows][sizeB_columns];

    printf("\nZadejte hodnoty do prvni matice:\n");
    for(int row = 0; row < sizeA_rows; row++){
      for(int column = 0; column < sizeA_columns; column++){
        printf("[%i,%i]: ",row,column);
        scanf("%i",&matrixA[row][column]);
      }
    }

    printf("Zadejte hodnoty do druhe matice:\n");
    for(int row = 0; row < sizeB_rows; row++){
      for(int column = 0; column < sizeB_columns; column++){
        printf("[%i,%i]: ",row,column);
        scanf("%i",&matrixB[row][column]);
      }
    }

    printMatrix(sizeA_rows, sizeA_columns, matrixA);
    printMatrix(sizeB_rows, sizeB_columns, matrixB);


    if(sizeA_columns == sizeB_rows){
        printf("Multiplication defined\n");
        //result matrix size will be sizeA_rows * sizeB_columns
        int sizeC_rows = sizeA_rows;
        int sizeC_columns = sizeB_columns;
        int matrixC [sizeC_rows][sizeC_columns];
        printMatrix(sizeA_rows,sizeA_columns,matrixA);
        printMatrix(sizeB_rows,sizeB_columns,matrixB);
        for(int row = 0; row < sizeC_rows; row++){
            for(int column  = 0; column < sizeC_columns; column++){
                matrixC[row][column] = 0;
                for(int i = 0; i < sizeB_rows; i++){
                  matrixC[row][column] += matrixA[row][i] * matrixB[i][column];
                }      
            }
        }
        printMatrix(sizeC_rows,sizeC_columns,matrixC);
    }

    return 0;
}