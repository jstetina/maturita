#include <stdio.h>

int MAX(int pole [],int velikost_pole){
    int max = pole[0];
    for(int i = 0; i < velikost_pole; i++){
        if(pole[i] > max){
            max = pole[i];
        }
    }
    return max;
}

int main(){
    int  a [5][4];

    printf("Zadejte hodnoty do pole 5x4\n");
    for(int radky = 0; radky < 5; radky++){
        for(int sloupce = 0; sloupce < 4; sloupce++){
            printf("[%i,%i]: ",radky+1,sloupce+1);
            scanf("%i",&a[radky][sloupce]);
        }
    }

    printf("\n");
    printf("vypis pole:\n");

    for(int radky = 0; radky < 5; radky++){
        for(int sloupce = 0; sloupce < 4; sloupce++){
            printf("%i\t",a[radky][sloupce]);
        }
        printf("\n");
    }

    printf("\n");
   for(int radky = 0; radky < 5; radky++){
       int max_hodnota = MAX(a[radky],4);
       printf("Max. hodnota %i. radku je %i\n",radky+1,max_hodnota);
   }

    return 0;
}