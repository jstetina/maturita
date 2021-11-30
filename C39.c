//C39
#include <stdio.h>
#include <stdbool.h>

bool KOLMOST(int a [], int b []){
    int soucin = 0;
    for(int i = 0; i < 4; i++){
        soucin += a[i] * b[i];
    }
    if(soucin == 0){
        return true;
    }
    else{
        return false;
    } 
}

int main(){
    int a [4];
    int b [4];

    printf("Overovani kolmosti dvou vektoru\n");
    printf("prvni vektor: \n");
    for(int i = 0; i < 4; i++){
        printf("%i. slozka: ",i+1);
        scanf("%i",&a[i]);
    }

    printf("druhy vektor: \n");
    for(int i = 0; i < 4; i++){
        printf("%i. slozka: ",i+1);
        scanf("%i",&b[i]);
    }

    if(KOLMOST(a,b)){
        printf("vektory JSOU kolme");
    }
    else{
        printf("vektory NEJSOU kolme");
    }
    return 0;
}
