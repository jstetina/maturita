#include <stdio.h>
#include <stdbool.h>

#define MAX_POCET_HODNOT 50

int main(){
    int vstup = -1;
    int hodnoty [MAX_POCET_HODNOT];

    printf("Zadejte radu cisel zakoncenou cislem 0 (prvni pozice je vzor): ");

    int counter = 0;
    while(vstup != '0' && counter <= MAX_POCET_HODNOT){
        vstup = getchar();
        hodnoty[counter] = vstup;
        counter++;
    }

    int vzor = hodnoty[0];
    printf("vzor: %c \n",vzor);

    bool shoda = false;
    printf("Shoda na pozicich: ");
    for(int i = 1; i < counter; i++){
        if(hodnoty[i] == vzor){
            printf("%d, ",i);
            shoda = true;
        }
    }
    if(shoda == false){
        printf("ZADNA SHODA");
    }
    return 0;
}
