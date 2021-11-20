#include <stdio.h>


int max(int cisla []){
    int max = 0;
    for(int i = 0; i < 3; i++){
        if(cisla[i] > max){
            max = cisla[i];
        }
    }
    return max;
}


int main(){
    int cisla[3];
    int maxima[3];



    for(int i = 1; i <= 3; i++){
        printf("zadejte %i. trojici cisel: ",i);
        scanf("%i %i %i",&cisla[0],&cisla[1],&cisla[2]);
        int current_max = max(cisla);
        printf("MAX = %i \n",current_max);
        maxima[i-1] = current_max;
    }

    printf("CELKOVE MAXIMUM = %i",max(maxima));

    return 0;
}