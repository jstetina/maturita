#include <stdio.h>
#include <stdbool.h>

int main(){
    FILE * file = fopen("vstup.dat","r");

    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int tabs = 0;
    int newline = 0;
    int other = 0;

    char c = fgetc(file);
    while(c != EOF){
        switch(c){
            printf("%c",c);
            case 'a' ... 'z':
            case 'A' ... 'Z':
                letters++;
                break;
            case '0' ... '9':
                digits++;
                break;
            case ' ':
                spaces++;
                break;
            case '\t':
                tabs++;
                break;
            case '\n':
                newline++;
                break;
            default:
                other++;
                break;
        }
        c = fgetc(file);
    }

    printf("ANALYZA VSTUPNIHO TEXTU:\n");
    printf("Pocet pismen:     %i\n",letters);
    printf("Pocet cislic:     %i\n",digits);
    printf("Pocet mezer:      %i\n",spaces);
    printf("Pocet zalomeni:   %i\n",newline);
    printf("Pocet tabelatoru: %i\n",tabs);
    printf("Pocet ostatnich:  %i\n",other);
   
    return 0;
}