#include <stdio.h>
#define MAX_LENGTH 10

void function(char array [] [MAX_LENGTH]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%i ",array[i][j]);
        }
        printf("\n");
    }
}


int main(){
    char array[3][10] = {{1,2},{2,3},{3,4}};
    function(array);
}