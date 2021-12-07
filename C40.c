#include <stdio.h>

int main(){
    FILE * f_read;
    f_read = fopen("dopis.dat","r");

    char input = fgetc(f_read);
    while(input != EOF){
        printf("%c",input);
        input = fgetc(f_read);
    }

    return 0;
}