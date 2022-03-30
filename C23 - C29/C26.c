#include <stdio.h>

int main(){
    FILE * file = fopen("dopis.txt","r");
    
    char c = fgetc(file);
    while(c != '\n'){
        printf("%c",c);
        c = fgetc(file);
    }
    printf("\n");
    return 0;   
}