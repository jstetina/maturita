#include <stdio.h> 


int main(){
    char c;
    printf("Prevod znaku do hodnoty z ASCII\n");
    printf("Zadejte znak pro prevod: ");
    scanf("%c",&c);
    printf("Hodnota znaku '%c' v ASCII je %i\n\n",c,c);


    printf("Prevod hodnoty z ASCII na znak\n");
    printf("Zadejte hodnotu znaku pro prevod: ");
    scanf("%i",&c);
    printf("Hodnota znaku %i odpovida znaku '%c'",c,c);

}