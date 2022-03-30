#include <stdio.h>

int main(){
    FILE *file = fopen("datavst.dat","r+");
    int numbers [3];
    printf("Cisla ze souboru:\n");
    for(int i = 0; i < 3; i++){
        fscanf(file,"%i",&numbers[i]);
        printf("%i\n",numbers[i]);
    }
    fseek(file,0,SEEK_SET); //vraceni kurzoru zpet na zacatek souboru
    printf("Zadejte nova tri cisla k zapsani do souboru:\n");
    for(int i = 0; i < 3; i++){
        printf("%i.cislo: ",i+1);
        scanf("%i",&numbers[i]);
        fprintf(file,"%i\n",numbers[i]);
    }

    fclose(file);
    return 0;
}