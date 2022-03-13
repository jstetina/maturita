#include <stdio.h>
#include <stdbool.h>

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

void vypis_pole(int pole[], int velikost_pole){
    printf("{");
    for(int i = 0; i < velikost_pole;i++){
        printf("%i,",pole[i]);
    }
    printf("%c}\n",8);
    return;
}

int binary_search(int pole[], int low, int high, int search){
    int mid_element = (low + high)/2;
    if(pole[mid_element] == search){
        return mid_element;
    }
    else if(high <= low){
        return -1;
    }
    else if(pole[mid_element] > search){
        return binary_search(pole,low,mid_element-1,search);
    }
    else if(pole[mid_element] < search){
        return binary_search(pole,mid_element+1,high,search);
    }
}


int main(){
    int n,V;
    printf("Zadejte pocet prvku n: ");
    scanf("%d",&n);
    printf("Zadejte prirozene cislo V: ");
    scanf("%d",&V);
    
    int pole[n];

    for(int i = 0; i < n; i++){
        printf("zadejte %i. prvek: ",i+1);
        scanf("%d",&pole[i]);
    }
    
    printf("neserazene pole: ");
    vypis_pole(pole,n);

    BUBBLE_SORT(pole,n);
    
    printf("serazene pole: ");
    vypis_pole(pole,n);

    int index_vzorku = binary_search(pole,0,n,V);

    if(index_vzorku == -1){
        printf("Number not found");
    }
    else{
        printf("Index je %i\n",index_vzorku);
        printf("Kontrola pole[%i] je %i stejne jako vzorek %i",index_vzorku, pole[index_vzorku],V);
    }
    return 0;
}