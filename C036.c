#include <stdio.h>

int MAXIMUM(int vektor [], int size){
    int max = vektor[0];
    for(int i = 0; i < size; i++){
        if(vektor[i] > max){
            max = vektor[i];
        }
    }
    return max;
}

int MINIMUM(int vektor [], int size){
    int min = vektor[0];
        for(int i = 0; i < size; i++){
            if(vektor[i] < min){
                min = vektor[i];
            }
        }
        return min;
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
    printf("zadany vektor = {");
    for(int i = 0; i < velikost_vektoru;i++){
        printf("%i,",vektor[i]);
    }
    printf("%c",8); //backspace
    printf("} \n\n");
    
    int max = MAXIMUM(vektor,velikost_vektoru);
    int min = MINIMUM(vektor,velikost_vektoru);

    int rozdil = max - min;

    printf("maximum je: %i\n",max);
    printf("minimum je: %i\n",min);
    printf("rozdil je: %i\n",rozdil);

    return 0;
}