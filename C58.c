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
    int pole [] = {2,25,3,9,2,74,2,5,41,6};
    int velikost_pole = (int)(sizeof(pole)/sizeof(int));

    VYPIS_POLE(pole,velikost_pole);
    BUBBLE_SORT(pole,velikost_pole);
    VYPIS_POLE(pole, velikost_pole);
    
    return 0;
}