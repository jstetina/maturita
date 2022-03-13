#include <stdio.h>

int main(){
    int a,b,c;

    printf("KONTROLA EXISTENCE TROJUHELNIKU \n");
    printf("strana a - ");
    scanf("%i",&a);
    printf("\nstrana b - ");
    scanf("%i",&b);
    printf("\nstrana c - ");
    scanf("%i",&c);
    printf("\n");

    if(a + b > c){
        if(b + c > a){
            if(a + c > b){
                printf("ANO, tento trojuhelnik EXISTUJE");
                return 0;
            }
        }
    }
    printf("NE, tento trojuhelnik NEEXISTUJE");

    return 0;
}