#include <stdio.h>

int findMax(int rows, int columns, int array[rows][columns]){
    int max = array[0][0];
    for(int i = 0; i < rows; i++){
        for(int x = 0; x < columns; x++){
            if(array[i][x] > max){
                max = array[i][x];
            }
        }
    }
    return max;
}



int main(){
    const int rowsNumber = 5;
    const int columnsNumber = 4;
    int a [rowsNumber] [columnsNumber];
    int max;
    
    printf("Zadejte hodnoty do pole 5x4\n");
    for(int radky = 0; radky < 5; radky++){
        for(int sloupce = 0; sloupce < 4; sloupce++){
            printf("[%i,%i]: ",radky+1,sloupce+1);
            scanf("%i",&a[radky][sloupce]);
        }
    }
    max = findMax(rowsNumber,columnsNumber,a);
    

    printf("\n\n");
    printf("Vypis pole:\n");


     for(int radky = 0; radky < 5; radky++){
        for(int sloupce = 0; sloupce < 4; sloupce++){
            printf("%i\t",a[radky][sloupce]);
        }
        printf("\n");
    }
    printf("Prvek s nejvetsi hodnotou je %i",max);

}