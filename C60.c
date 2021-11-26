#include <stdio.h>

int find(int pole[],int velikost_pole, int vzorek){
    int i;
    for(int i = 0; i < velikost_pole; i++){
        if(pole[i] == vzorek){
            return i;
        }   
    }
    return -1;
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

    int index_vzorku = find(pole,n,V);
    if(index_vzorku == -1){
        printf("Number not found");
    }
    else{
        printf("Index je %i\n",index_vzorku);
        printf("Kontrola pole[%i] je %i stejne jako vzorek %i",index_vzorku, pole[index_vzorku],V);
    }
    return 0;
}