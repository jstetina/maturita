#include <stdio.h>

void printArray(int pole [], int velikost_pole){
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

void selectionSort(int array [], int n){
    for(int i = 0; i < n-1; i++){
        for(int x = i; x < n; x++){
            if(array[x] < array[i]){
                swap(&array[x],&array[i]);
            }
        }
    }
}

int main(){
    int n;
    printf("Serazeni pole pomoci INSERTION SORTU\n");
    printf("Zadejte cislo n(pocet prvku): ");
    scanf("%d",&n);

    int array[n];

    for(int i = 0; i < n; i++){
        printf("zadejte %i. prvek: ",i+1);
        scanf("%d",&array[i]);
    }
    printArray(array,n);
    selectionSort(array,n);
    printArray(array,n);

    return 0;
}