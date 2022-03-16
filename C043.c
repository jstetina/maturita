#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 10


void swapStrings(char *str1, char *str2){
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}  

void lexSort(char strings [][MAX_LENGTH], int numberOfStrings){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i = 0; i < numberOfStrings-1; i++){
            if(strcmp(strings[i],strings[i+1]) > 0){
                swapStrings(strings[i],strings[i+1]);
                sorted = false;
            }
        }
    }

}

void printStrings(char strings [] [MAX_LENGTH],int numberOfStrings){
    for(int i = 0; i < numberOfStrings;i++){
        printf("%i.retezec: %s\n",i+1,strings[i]);
    }
    printf("\n");
}


int main(){
    const int numberOfStrings = 3;
    char strings [numberOfStrings] [MAX_LENGTH];

    printf("Zadejte %i retezcu:\n",numberOfStrings);
    for(int i = 0; i < numberOfStrings; i++){
        printf("%i.retezec: ",i+1);
        scanf("%s",strings[i]);
    }

    lexSort(strings,numberOfStrings);
    printf("Serazene retezce:\n");
    printStrings(strings,numberOfStrings);
    return 0;
}