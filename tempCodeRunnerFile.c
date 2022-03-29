lumns];
        printMatrix(sizeA_rows,sizeA_columns,matrixA);
        return 0;
        for(int row = 0; row < sizeA_rows; row++){
            for(int column  = 0; column < sizeB_columns; column++){
                for(int i = 0; i < sizeA_columns; i++){
                    matrixC[row][column] += matrixA [row][i] * matrixB [i][row];
                }
                printf("%i ",matrixC[row][column]);
            }
        }
        return 0;
        printMatrix((int *)matrixC,sizeA_rows,sizeB_columns);
        return 0;