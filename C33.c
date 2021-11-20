#include <stdio.h>

int OBSAH(int rozmery []){
    return (rozmery[0]*rozmery[1]);
}

int SOUCET(int hodnoty []){
    int soucet = 0;
    for(int i = 0; i < 3; i++){
        soucet += hodnoty[i];
    }
    return soucet;
}

void ZOBRAZ(int obsahy [],int soucet){
    for(int i = 0; i < 3; i++){
        printf("Obsah %i. obdelniku = %i\n",i+1,obsahy[i]);
    }
    printf("Soucet obsahu je %i",soucet);
    return;
}

int main(){
    int rozmery [3] [2];
    for(int i = 1; i <= 3; i++){
        printf("zadejte rozmery %i. obdelniku \n",i);
        printf("a - ");
        scanf("%i",&rozmery[i-1][0]);
        printf("b - ");
        scanf("%i",&rozmery[i-1][1]);
        printf("\n");
    }

    //VYPIS ROZMERU
   /*for(int i = 0; i < 3; i++){
        printf("rozmery %i jsou ",i+1);
        for(int x = 0; x < 2; x++){
            printf("%i ",rozmery[i][x]);
        }
        printf("\n");
    }*/
    int obsahy [3];
    for(int i = 0; i < 3; i++){
        obsahy[i] = OBSAH(rozmery[i]);
    }
    int soucet = SOUCET(obsahy);
    ZOBRAZ(obsahy,soucet);
    return 0;
}