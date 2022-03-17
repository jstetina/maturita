#include <stdio.h>

int UPPERtoLOWER(char c){ //convert UPPERCASE TO LOWERCASE
    if(c > 64 && c < 91){
        c += 32; 
    } 
    return c;
}

int main(){
    char string [50];
    printf("Zadejte vstupni retezec: ");
    scanf("%s",string);

    int i = 0;
    int samohlasky = 0;
    int souhlasky = 0;
    int numbers = 0;
    int other = 0;
    while(string[i] != 0){
        char c = UPPERtoLOWER(string[i]); //convert uppercase to lowercase
        printf("%i",c);
        switch (c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            samohlasky++;
            break;

        case 'h':
            if(UPPERtoLOWER(string[i-1]) == 'c'){ // pripad pro 'ch'
                //DO NOTHING
            }
            else{
                souhlasky++;
            }
            break;
        case 'k':
        case 'r':
        case 'd':
        case 't':
        case 'n':
        case 'z':
        case 's':
        case 'c':
        case 'j':
        case 'b':
        case 'f':
        case 'l':
        case 'm':
        case 'p':
        case 'v':
            souhlasky++;
            break;
        case '0' ... '9':
            numbers++;
            break;
        default:
            other++;
            break;
        }
        i++;
    }
    printf("\nStatistika zadaneho retezce:\n");
    printf("SAMOHLASKY   %ix\n",samohlasky);
    printf("SOUHLASKY    %ix\n",souhlasky);
    printf("CISLA        %ix\n",numbers);
    printf("JINE         %ix\n",other);
    return 0;
}