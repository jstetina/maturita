#include <stdio.h>

int main(){
    int n = -2;
    int modulo = 4;
    if(n < 0){
        n = (n % modulo) + modulo;
    }

    printf("%i",n);

    return 0;
}