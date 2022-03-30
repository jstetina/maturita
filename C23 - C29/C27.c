#include <stdio.h>

int main(){
    FILE * inputFile = fopen("orig.txt","r");
    FILE * outputFile = fopen("kopie.txt","w");
    char c;
    while(1){
        c = fgetc(inputFile);
        if(c == EOF){
            break;
        }
        printf("%c",c);
        fprintf(outputFile,"%c",c);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}