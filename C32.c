#include <stdio.h>

void VSTUP(int * a){
    printf("zadejte stranu ctverce a: ");
    scanf("%i",a);
    return;
}

int OBSAH(int a){
    return a*a;
}
int OBVOD(int a){
    return 4*a;
}

void VYSTUP(int obsah, int obvod){
    printf("Obsah zadaneho ctverce je %i\n",obsah);
    printf("Obvod zadaneho ctverce je %i\n",obvod);
    return;
}

int main(){
    int a;
    VSTUP(&a);
    VYSTUP(OBSAH(a),OBVOD(a));
    return 0;
}