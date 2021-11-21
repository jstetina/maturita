#include <stdio.h>

int main(){
    int a [5] [4];
    
    printf("Zadejte hodnoty do pole 5x4\n");
    for(int radky = 0; radky < 5; radky++){
        for(int sloupce = 0; sloupce < 4; sloupce++){
            printf("[%i,%i]: ",radky+1,sloupce+1);
            scanf("%i",&a[radky][sloupce]);
        }
    }

    printf("\n\n");

     for(int radky = 0; radky < 5; radky++){
        for(int sloupce = 0; sloupce < 4; sloupce++){
            printf("%i\t",a[radky][sloupce]);
        }
        printf("\n");
    }

}