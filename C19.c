#include <stdio.h>

int main(){
    int delenec,delitel;
    int podil,zbytek;
    
    printf("zadejte dve prirozena cisla\n");
    printf("1. cislo (delenec): ");
    scanf("%i",&delenec);
    printf("2.cislo (delitel): ");
    scanf("%i",&delitel);

    podil = delenec/delitel;
    zbytek = delenec%delitel;

    printf("%i/%i = %i zb.:%i",delenec,delitel,podil,zbytek);

    return 0;
}