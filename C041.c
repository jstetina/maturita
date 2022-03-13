#include <stdio.h>
#include <stdlib.h>


int main(){
    const int arrays_num = 3;
    int array_size = 10;
    char * array = (char *)malloc(array_size*sizeof(char));

    int counter = 0;
    for(int i = 0; i < arrays_num; i++){
        printf("zadejte %i.retezec: ",i+1);
        char input = getchar();
        do{
            if(counter >= array_size){
                array_size += 10;
                array = (char *)realloc(array,array_size*sizeof(char));
            }
            array[counter] = input;
            input = getchar();
            counter ++;
        }while(input != '\n');
    }
    for(int i = 0; i < counter; i++){
        printf("%c",array[i]);
    }

    return 0;
}