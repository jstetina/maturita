#include <stdio.h>
#include <math.h>

int main(){
    int strana_a;

    printf("zadejte stranu krychle a: ");
    scanf("%i",&strana_a);

    int objem = pow(strana_a,3);
    int povrch = 6*pow(strana_a,2);
    float stenova_uhlopricka = strana_a*sqrt(2);
    float telesova_uhlopricka =  strana_a*sqrt(3);

    printf("\n");
    printf("Objem = %i \n",objem);
    printf("Povrch = %i \n",povrch);
    printf("Stenova_uhlopricka = %.2f \n",stenova_uhlopricka);
    printf("Telesova uhlopricka = %.2f \n",telesova_uhlopricka);

    return 0;
}