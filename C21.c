#include <stdio.h>

int druha_mocnina();

int main(){
    int vstup;

    printf("Zadejte prirozene cislo: ");
    scanf("%i",&vstup);

    int vstup_na_druhou = druha_mocnina(vstup);
    printf("%i na 2 je %i",vstup,vstup_na_druhou);

    return 0;
}

int druha_mocnina(int a){
    //3^2 --> 1+3+5 = 9
    //aritmeticka posloupnost:
    // a3 = a1 + 2d --> 1+(2*2) == 5
    int vystup = 0;
    for(int i = 1;i <= 1 + (a-1)*2;i+=2){
        vystup += i;
    }
    return vystup;
}