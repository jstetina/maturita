#include <stdio.h>
#include <math.h>

void VSTUP(int * vstup){
    scanf("%i",vstup);
    return;
}

int MOCNINA2(int vstup){
    int vystup = pow(vstup,2);
    printf("%i na 2 je %i\n",vstup,vystup);
    return vystup;
}

int MOCNINA3(int vstup){
    int vystup = pow(vstup,3);
    printf("%i na 3 je %i\n",vstup,vystup);
    return vystup;
}

void POROVNANI(int mocnina2,int mocnina3){
    if(mocnina2 > mocnina3){
        printf("mocnina na 2 je vetsi");
    }
    else if(mocnina2 < mocnina3){
        printf("mocnina na 3 je vetsi");
    }
    else{
        printf("obe hodnoty jsou stejne");
    }
    return;
}


int main(){
    int vstup;
    printf("Zadejte cele cislo: ");
    VSTUP(&vstup);
    POROVNANI(MOCNINA2(vstup),MOCNINA3(vstup));
    return 0;
}