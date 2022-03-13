#include <stdio.h>

int main(){
    int pole [10] [10];
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            if(x == y)
                pole [x] [y] = 1;
            else
                pole[x][y] = 0;  
        }
    }

    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            printf("%i\t",pole[x][y]);
        }
        printf("\n");
    }

    return 0;
}