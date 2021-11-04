#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int delka(char string []);
bool stejne_retezce(char string1[],char string2 []);

int main(){
    char * test_string = "ahoooj";
    int maximalni_delka = 20;
    char string1 [maximalni_delka];
    char string2 [maximalni_delka];

    printf("Porovnavani dvou retezcu \n");
    printf("1. retezec - ");
    scanf("%[^\n]s",string1);    
    //fgets(string1,maximalni_delka,stdin);
    puts(string1);

    printf("2.retezec - ");
    scanf("%[^\n]s",string2);  
    //fgets(string2,maximalni_delka,stdin);
    puts(string2);
    if(stejne_retezce(string1,string2)){
        printf("Retezce jsou stejne");
    }
    else{
        int delka1 = delka(string1);
        int delka2 = delka(string2);
        printf("Retezce nejsou stejne \n");
        printf("Delka 1 = %i\n",delka1);
        printf("Delka 2 = %i\n",delka2);

    }

   
}

int delka(char string []){
    int size = strlen(string) -1;
    return size;
}

bool stejne_retezce(char string1 [],char string2 []){
    for(int i = 0; i < 20; i++){
        printf("DEBUG: %c == %c",string1[i],string2[i]);
        if(string1[i] != string2[i]){
            return false;
        }
    } 
    return true;
}