#include <stdio.h>


int gcd(int vstup1,int vstup2){
    if(vstup1 == vstup2){
        return vstup1;
    }

    if(max(vstup1,vstup2) % min(vstup1,vstup2) == 0){
        return min(vstup1,vstup2);
    }
    else{
        return gcd(min(vstup1,vstup2),(max(vstup1,vstup2) % min(vstup1,vstup2)));
    }
}

int min(int vstup1, int vstup2){
    if(vstup1 > vstup2){
        return vstup2;
    }
    else if(vstup2 > vstup1){
        return vstup1;
    }
}

int max(int vstup1, int vstup2){
    if(vstup1 > vstup2){
        return vstup1;
    }
    else if(vstup2 > vstup1){
        return vstup2;
    }
}


int main(){
    int vstup1;
    int vstup2;
    printf("Program pro vypocet NSD\n");
    printf("Zadejte dve hodnoty: ");

    scanf("%i %i",&vstup1,&vstup2);

    int NSD = gcd(vstup1,vstup2);
    printf("NSD(%i;%i) = %i",vstup1,vstup2,NSD);

    return 0;
}