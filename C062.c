#include <stdio.h>

void printMatrix(int m, int n ,int matrix [] [n]){
    for(int row; row < m; row++){
        for(int column; column < n; column++){
            printf("HELLO");
            printf("%i\t",matrix[row][column]);
        }
        printf("\n");
    }
}

void clearMatrix(int m, int n, int matrix [][n]){
    for(int row; row < m; row++){
        for(int column; column < n; column++){
            matrix[row][column] = 0;
        }
    }
}


int main(){
    printf("Program na nasobeni matic:\n");
    int matrixA [][3] = {{1,2,3},{2,3,4}};
    int matrixB [][3] = {{1,2},{2,2},{3,2}};

    int sizeA_rows = sizeof(matrixA)/sizeof(matrixA[0]);
    int sizeA_columns = sizeof(matrixA[0])/sizeof(matrixA[0][0]);

    int sizeB_rows = sizeof(matrixB)/sizeof(matrixB[0]);
    int sizeB_columns = sizeof(matrixB[0])/sizeof(matrixB[0][0]);

    
}