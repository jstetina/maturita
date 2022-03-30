#include <stdio.h>

int main(){
    FILE * inputFile = fopen("znaky.txt","r");
    FILE * outputFile = fopen("kopie.txt","w");

    int chars [2];
    for(int i = 0; i < 2; i++){
        fscanf(inputFile,"%c",&chars[i]);
        printf("%c",chars[i]);
        fprintf(outputFile,"%c",chars[i]);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}