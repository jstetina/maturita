#include <stdio.h>

int main(){
    char s1 [10];
    char s2 [10];
    char s3 [10];

    printf("Zadejte postupne tri retezce (max 10 znaku):\n");

    printf("s1: ");
    fgets(s1,sizeof(s1),stdin);

    printf("s2: ");
    fgets(s2,sizeof(s1),stdin);

    printf("s3: ");
    fgets(s3,sizeof(s1),stdin);

    printf("string 1: %s",s1);
    printf("string 2: %s",s2);
    printf("string 3: %s",s3);
    

    

    return 0;
}