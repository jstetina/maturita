#include <stdio.h>
#include <stdbool.h>

int main(){
    FILE * file = fopen("msbr.txt","r");
    char c = fgetc(file);

    int characters = 0;
    int words = 0;
    int lines = 0;

    while(1){
        if(c == ' '){
            words++;
        }
        else if(c == '\n'){
            lines++;
            words++;
        }
        else if(c == '\t'){
            words++;
        }
        
        if(c == EOF){
            words++;
            lines++;
            break;
        }

        characters++;
        c = fgetc(file);
    }

    printf("ANALYZA VSTUPNIHO TEXTU:\n");
    printf("Pocet slov:  %i\n",words);
    printf("Pocet radku: %i\n",lines);
    printf("Pocet znaku: %i\n",characters);
    
    return 0;
}