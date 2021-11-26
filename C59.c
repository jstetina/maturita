//quicksort 

#include <stdio.h>

void swap(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}


void vypis_pole(int pole[], int velikost_pole){
    printf("{");
    for(int i = 0; i < velikost_pole;i++){
        printf("%i,",pole[i]);
    }
    printf("%c}\n",8);
    return;
}

int partition(int pole [],int low,int high){
    int pivot = pole[high];
    int i = low -1;

    for(int j = low; j < high; j++){
        if(pole[j] < pivot){
            i++;
            swap(&pole[j],&pole[i]);
        }
    }
    swap(&pole[high],&pole[i+1]);
    return (i+1);

}

int quicksort(int pole[],int low, int high){
    if(low < high){
        int pivot = partition(pole, low, high);

        quicksort(pole,low,pivot-1);
        quicksort(pole,pivot+1,high);
    }
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

    vypis_pole(pole,n);
    quicksort(pole,0,n);
    vypis_pole(pole, n);
    return 0;
}