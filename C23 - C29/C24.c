#include <stdio.h>
#include <stdlib.h>




int main(){
    FILE * soubor; 
    soubor = fopen("datavst.dat","r");
    char vstup;
    char vstup_array;
    vstup = getc(soubor);
    int counter = 0;
    while(vstup != EOF){
        printf("%c",getc(soubor));
        
    }
    return 0;
}