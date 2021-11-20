#include <stdio.h>

int *PREVED_VEKTOR(int vektor_puvodni[], int size){
    static int vysledny_vektor [5];
    // 0 --> [0] + [9]
    // 1 --> [1] + [8]
    // ...
    for(int i = 0; i < 5;i++){
        vysledny_vektor[i] = vektor_puvodni[i] + vektor_puvodni[9-i];
    }
    return vysledny_vektor;
}

void VYPIS_VEKTOR(int vektor [], int size){
    printf("vektor = {");
    for(int i = 0; i < size;i++){
        printf("%i,",vektor[i]);
    }
    printf("%c",8); //backspace
    printf("} \n\n");
}

int main(){
    int vektor [10];
    int velikost_vektoru = (int)(sizeof(vektor)/sizeof(int));

    printf("Zadejte prvky u %i prvkoveho vektoru\n",velikost_vektoru);
    for(int i = 0; i < velikost_vektoru; i++){
        printf("%i. prvek: ",i+1);
        scanf("%i",&vektor[i]);
    }
    printf("\n");
    
    VYPIS_VEKTOR(vektor,velikost_vektoru);

    int novy_vektor [5];
    int * novy_vektor_ptr = novy_vektor;
    novy_vektor_ptr = PREVED_VEKTOR(vektor,velikost_vektoru);
    int novy_vektor_velikost = (int)(sizeof(novy_vektor)/sizeof(int));
    printf("%i",novy_vektor_velikost);
    VYPIS_VEKTOR(novy_vektor,novy_vektor_velikost);

    return 0;
}