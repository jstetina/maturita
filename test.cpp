#include <stdio.h>


int main(){
    int input = 10;
    int *input_pointer = &input;
    int &reference = input_pointer;

    printf("zadej cislo: ");
    //scanf("%i",input_pointer);
    printf("cislo je %i",reference);
    return 0; 

}



