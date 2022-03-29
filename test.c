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

void clearMatrix(int m, int n, int arr[][n]){
  for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
        arr[i][j] = 0;
      }
    }
}

void matrixMult(int m, int n, int arrp[][n]){

}
 
int main(){
    printf("Program na nasobeni matic:\n");
    int matrixA [][3] = {{1,2,3},{2,3,4}};
    int matrixB [][2] = {{1,2},{2,2},{3,2}};

    int sizeA_rows = sizeof(matrixA)/sizeof(matrixA[0]);
    int sizeA_columns = sizeof(matrixA[0])/sizeof(matrixA[0][0]);

    int sizeB_rows = sizeof(matrixB)/sizeof(matrixB[0]);
    int sizeB_columns = sizeof(matrixB[0])/sizeof(matrixB[0][0]);

    printMatrix(sizeA_rows, sizeA_columns, matrixA);
    printMatrix(sizeB_rows, sizeB_columns, matrixB);


    if(sizeA_columns == sizeB_rows){
        printf("Multiplication defined\n");
        //matrix size will be sizeA_rows * sizeB_columnsy
        int sizeC_rows = sizeA_rows;
        int sizeC_columns = sizeB_columns;
        int matrixC [sizeC_rows][sizeC_columns];
        printMatrix(sizeA_rows,sizeA_columns,matrixA);
        printMatrix(sizeB_rows,sizeB_columns,matrixB);
        for(int row = 0; row < sizeC_rows; row++){
            for(int column  = 0; column < sizeC_columns; column++){
                matrixC[row][column] = 0;
                for(int i = 0; i < sizeA_columns; i++){
                    matrixC[row][column] += matrixA [row][i] * matrixB [i][row];
                }
            }
        }
        printMatrix(sizeC_rows,sizeC_columns,matrixC);
    }

    return 0;
}