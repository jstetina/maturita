#include <stdio.h>
#include <math.h>

int najdi_preponu (int hodnoty[]){
    size_t values_size = sizeof(hodnoty) / sizeof(hodnoty[0]);
    int max = 0;
    int max_index;
    for(int i = 0; i < values_size + 1; i++){
        if(hodnoty[i] > max){
            max = hodnoty[i];
            max_index = i;
        }
    }
    return max_index;
}

bool pravouhly(int odvesna1,int odvesna2, int prepona){
    if(prepona == sqrt(pow(odvesna1,2) + pow(odvesna2,2))){
        return true;
    }
    return false;
}

int main(){
    int hodnoty [3];

    printf("KONTROLA PRAVOUHLOSTI TROJUHELNIKU");
    for(int i = 1; i <= 3; i++){
        printf("\n%i. strana - ",i);
        scanf("%i",&hodnoty[i-1]);
    }

    int prepona_index = najdi_preponu(hodnoty);
    int prepona = hodnoty[prepona_index];
    int odvesna1 = hodnoty[(prepona_index+1)%3];
    int odvesna2 = hodnoty[(prepona_index+2)%3];

    if(pravouhly(odvesna1,odvesna2,prepona)){
        printf("Trojuhelnik JE PRAVOUHLY");
    }
    else{
        printf("Trojuhelni NENI PRAVOUHLY");
    }
    
    return 0;
    
}