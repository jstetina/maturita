#include <stdio.h>
#include <stdbool.h>

void VYPIS_POLE(int pole [], int velikost_pole){
    printf("{");
    for(int i = 0; i < velikost_pole; i++){
        printf("%i, ",pole[i]);
    }
    printf("%c%c",8,8);
    printf("}\n");
    return;
}

void BUBBLE_SORT(int * pole,int velikost_pole){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i = 0; i < velikost_pole - 1; i++){
            if(pole[i] > pole[i+1]){
                int temp = pole[i];
                pole[i] = pole[i+1];
                pole[i+1] = temp;
                sorted = false;
            }  
        }
    }
    return;
}


int main(){
    int n;

    printf("Serazeni pole pomoci BubbleSort\n");
    printf("Zadejte cislo n(pocet prvku): ");
    scanf("%d",&n);

    int pole[n];

    for(int i = 0; i < n; i++){
        printf("zadejte %i. prvek: ",i+1);
        scanf("%d",&pole[i]);
    }


    VYPIS_POLE(pole,n);
    BUBBLE_SORT(pole,n);
    VYPIS_POLE(pole, n);
    
    return 0;
}