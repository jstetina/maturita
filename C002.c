#include <stdio.h>

/*
BANKOVKY - 5000 2000 1000 500 200 100 
MINCE - 50 20 10 5 2 1
*/

int main(){
    printf("VYCETKA BANKOVEK \n");
    printf("Zadejte castku: ");

    int castka_vstup;
    int bankovky [6] = {5000,2000,1000,500,200,100};
    int mince [6] = {50,20,10,5,2,1};
    int castky_vystup [12];

    scanf("%i",&castka_vstup);
    printf("\n");

    if(castka_vstup >= 0){
        for(int i = 0; i < 6; i++){ //BANKOVKY
            castky_vystup[i] = castka_vstup / bankovky[i];
            castka_vstup = castka_vstup % bankovky[i];
            printf("%ix %i Kc \n",castky_vystup[i],bankovky[i]);
        }
        for(int i = 0; i < 6; i++){ //MINCE
            castky_vystup[i+6] = castka_vstup/mince[i];
            castka_vstup = castka_vstup % mince[i];
            printf("%ix %i Kc \n",castky_vystup[i+6],mince[i]);
        }
        return 0;
    }

    else{
        printf("ERROR: zaporne cislo");
        return 1;
    }
}
