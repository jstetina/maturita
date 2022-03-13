#include <stdio.h>
#include <stdbool.h>
#define MAX_LENGTH 10

// Swap inner arrays (words)
void swap(char strings [][MAX_LENGTH], int index1, int index2){ 
    for(int i = 0; i < MAX_LENGTH; i++){
        int temp = strings[index1][i];
        strings[index1][i] = strings[index2][i];
        strings[index2][i] = temp;
    }
}

// sort elements alphabetically
void lexSort(char strings[] [MAX_LENGTH],int low, int high, int position){
    bool sorted = false;
    if(position >= MAX_LENGTH){
        return;
    }
    while(!sorted){
        sorted = true;
        for(int i = low; i < high-1; i++){
            if(strings[i][position] > strings[i+1][position]){
                swap(strings,i,i+1);
                sorted = false;
            }
            else if(strings[i][position]  == strings[i+1][position]){
                lexSort(strings,i,i+1,position++);
                sorted = false;
            }
        }
    }
}

void printStrings(char strings [] [MAX_LENGTH], int numberOfStrings){
    for(int i = 0; i < numberOfStrings; i++){
        printf("String %i: %s\n",i+1,strings[i]);
    }
    printf("\n");
}


int main(){
    // create array with 3 arrays of 10 characters
    const int numberOfStrings = 3;
    char strings [numberOfStrings] [MAX_LENGTH];
    

    printf("Zadejte postupne tri retezce (max 10 znaku):\n");

    for(int i = 0; i < numberOfStrings; i++){
        printf("String %i: ",i+1);
        scanf("%s",strings[i]);
    }
    printf("\n");

    printStrings(strings,numberOfStrings);
    lexSort(strings,0,numberOfStrings,0);
    printStrings(strings,numberOfStrings);

    return 0;
}