#include <stdio.h>

void REVERSE(int * pole, int velikost){
    for(int i = 0; i < velikost/2; i++){
        int temp;
        temp = pole[i];
        pole[i] = pole[velikost-1-i];
        pole[velikost-1-i] = temp;
    }
    return;
}

void LIST_ELEMENTS(int pole[], int velikost){
    printf("prvky pole {");
    for(int i = 0; i < velikost; i++){
        printf("%i,",pole[i]);
    }
    printf("%c}",8);
    printf("\n");
    return;
}

int main(){
    int velikost_a = 10;
    int a [velikost_a];

    printf("Zadejte hodnoty do pole\n");
    for(int i = 0; i < velikost_a; i++){
        printf("%i. hodnota: ", i+1);
        scanf("%i",&a[i]);
    }
    printf("puvodni ");
    LIST_ELEMENTS(a,velikost_a);
    REVERSE(a,velikost_a);
    printf("prehazene ");
    LIST_ELEMENTS(a,velikost_a);
   
    return 0;
}