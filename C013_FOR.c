#include <stdio.h>

//reseni pomoci cyklu FOR

int main(){
	int i,n,S;
	S = 0;
	
	printf("zadejte n: ");
	scanf("%i",&n);
	
	printf("n = %i \n\n", n);

	printf("pocet interaci \t aktualni soucet \n");
	
	for(i = 1; i <= n; i++){
		S+=i;
		printf("iterace #%i \t soucet = %i \n",i,S);	
	}
	
	printf("\n");
	printf("CELKOVY SOUCET je roven %i\n\n\n",S);

    return 0;	
}
