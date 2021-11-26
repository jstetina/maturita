//INSERTION SORT
#include <stdio.h>

void vypis_pole(int pole [], int velikost_pole){
    printf("{");
    for(int i = 0; i < velikost_pole; i++){
        printf("%i, ",pole[i]);
    }
    printf("%c%c",8,8);
    printf("}\n");
    return;
}


void swap(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}


void insertion_sort(int pole [],int velikost_pole){
    for(int i = 1; i < velikost_pole; i++){
        if(pole[i] < pole[i-1]){
            for(int j = i-1; j > -1; j--){
                if(pole[j] > pole[i]){
                    swap(&pole[j],&pole[i]);
                    break;
                }
            }
        }
    }
    return;
}


int main(){
    int n;

    printf("Serazeni pole pomoci INSERTION SORTU\n");
    printf("Zadejte cislo n(pocet prvku): ");
    scanf("%d",&n);

    int pole[n];

    for(int i = 0; i < n; i++){
        printf("zadejte %i. prvek: ",i+1);
        scanf("%d",&pole[i]);
    }

    vypis_pole(pole,n);
    insertion_sort(pole,n);
    vypis_pole(pole,n);

    return 0;
}