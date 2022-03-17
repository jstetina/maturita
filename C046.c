#include <stdio.h>

void cipher(char * string, int shift){
    int i = 0; 
    while(string[i] != 0){
        string[i] += shift;        
        i++;
    }
}

void decipher(char * string, int shift){
    int i = 0; 
    while(string[i] != 0){
        string[i] -= shift;        
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