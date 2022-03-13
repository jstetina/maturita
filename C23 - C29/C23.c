#include <stdio.h>

int main(){
    FILE * soubor = fopen("pokus.txt","w");

    for(int i = 0; i < 10; i++){
        fprintf(soubor,"%i\n",i+1);
    }
    fclose(soubor);

    return 0;
}