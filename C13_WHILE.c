#include <stdio.h>

//reseni pomoci cyklu WHILE

int main(){
	int n;
	int S = 0;
	
	printf("zadejte n: ");
	scanf("%i",&n);
	
	printf("n = %i \n\n", n);

	printf("pocet interaci \t aktualni soucet \n");
	
    int i = 1;
	while(i <= n){
		S += i;
		printf("iterace #%i \t soucet = %i \n",i,S);
        i++;	
	}
	
	printf("\n");
	printf("CELKOVY SOUCET je roven %i\n\n\n",S);

    return 0;	
}
