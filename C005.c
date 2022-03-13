#include <stdio.h>
#include <stdbool.h>

//rovnostranny, rovnoramenny, obecny
bool rovnostranny(int a,int b,int c){
    if (a == b && b == c){
        return true;
    }
    return false;
}

bool rovnoramenny(int a, int b, int c){
    if(a == b || b == c || a == c){
        return true;
    }
    return false;
}



int main(){
    int a,b,c;

    printf("TYP TROJUHELNIKU \n");
    printf("\nstrana a - ");
    scanf("%i",&a);
    printf("\nstrana b - ");
    scanf("%i",&b);
    printf("\nstrana c - ");
    scanf("%i",&c);
    printf("\n");

    if(rovnostranny(a,b,c)){
        printf("Trojuhelnik je ROVNOSTRANNY");
    }
    else if(rovnoramenny(a,b,c)){
        printf("Trojuhelnik je ROVNORAMENNY");
    }
    else{
        printf("Trojuhelnik je OBECNY");
    }

    return 0;
}