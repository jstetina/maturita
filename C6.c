#include <stdio.h>

int max (int hodnoty[]){
    size_t values_size = sizeof(hodnoty) / sizeof(hodnoty[0]);
    int max = 0;
    for(int i = 0; i < values_size + 1; i++){
        if(hodnoty[i] > max){
            max = hodnoty[i];
        }
    }
    return max;
}


int main(){
    const int pocet_cisel = 3;
    int hodnoty [pocet_cisel];

    printf("NEJVETSI HODNOTA ZE 3 CISEL \n");
    for(int i = 1; i <= pocet_cisel; i++){
        printf("%i. cislo - ",i);
        scanf("%i",&hodnoty[i-1]);
    }

    int max_hodnota = max(hodnoty);
    printf("\n\nnejvetsi cislo je %i",max_hodnota);
    
    return 0;
}