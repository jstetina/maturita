#include <stdio.h>
#include <stdbool.h>
#define UPPERCASE 65 //ASCII VALUES for letters in alphabet
#define LOWERCASE 97
#define ALPHABET 26

bool isUpper(char letter){
    if(letter >= UPPERCASE || letter <= UPPERCASE+32){
        return true;
    }
    return false;
}

bool isLower(char letter){
    if(letter >= LOWERCASE || letter <= LOWERCASE+32){
        return true;
    }
    return false;
}

void cipher(char * string, int shift){
    int i = 0;
    if(shift < 0){
        shift = (shift % ALPHABET) + ALPHABET;
    }

    while(string[i] != 0){
        if(isUpper(string[i])){
            string[i] -= UPPERCASE;
            string[i] += shift % ALPHABET;
            string[i] += UPPERCASE;
        }
        else if(isLower(string[i])){
            string[i] -= LOWERCASE;
            string[i] += shift % ALPHABET;
            string[i] += LOWERCASE;
        }
        else{
            //u jinych znaku se neprovadi posun
        }
        i++;
    }
}

void decipher(char * string, int shift){
    int i = 0;
    if(shift < 0){
        shift = (shift % ALPHABET) + ALPHABET;
    }

    while(string[i] != 0){
        if(isUpper(string[i])){
            string[i] -= UPPERCASE;
            string[i] -= shift % ALPHABET;
            string[i] += UPPERCASE;
        }
        else if(isLower(string[i])){
            string[i] -= LOWERCASE;
            string[i] -= shift % ALPHABET;
            string[i] += LOWERCASE;
        }
        else{
            //u jinych znaku se neprovadi posun
        }
        i++;
    }
}

int main(){
    char inputString [50];
    int shift;

    printf("Zadejte text k zasifrovani (max 50 znaku): ");
    scanf("%s",inputString);
    printf("Zadejte posun: ");
    scanf("%i",&shift);
  
    cipher(inputString,shift);
    printf("Zasifrovane: %s\n",inputString);
    decipher(inputString,shift);
    printf("Rozsifrovane: %s\n",inputString);
    return 0;
}