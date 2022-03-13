#include <stdio.h>
#include <stdlib.h>

void VYPIS_PRVKY_VEKTORU(int vektor[],int velikost_vektoru){
    printf("prvky vektoru = {");
    for(int i = 0; i < velikost_vektoru;i++){
        printf("%i,",vektor[i]);
    }
    printf("%c",8); //backspace
    printf("} \n\n");
}

void PREVED_VEKTOR(int puvodni_vektor [], int velikost_pv, int * novy_vektor, int velikost_nv){
    for(int i = 0; i < velikost_nv; i++){
        novy_vektor[i] = puvodni_vektor[i] + puvodni_vektor[velikost_pv-1-i];
    }
    return;
}


int main(){
    int vektor [10];
    int velikost_vektoru = (int)(sizeof(vektor)/sizeof(int));

    int novy_vektor [5];
    int velikost_noveho_vektoru = (int)(sizeof(novy_vektor)/sizeof(int));


    printf("Zadejte prvky u %i prvkoveho vektoru\n",velikost_vektoru);
    for(int i = 0; i < velikost_vektoru; i++){
        printf("%i. prvek: ",i+1);
        scanf("%i",&vektor[i]);
    }

    VYPIS_PRVKY_VEKTORU(vektor, velikost_vektoru);
    PREVED_VEKTOR(vektor,velikost_vektoru,novy_vektor,velikost_noveho_vektoru);
    VYPIS_PRVKY_VEKTORU(novy_vektor,velikost_noveho_vektoru);

    return 0;
}