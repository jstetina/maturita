#include <stdio.h>

int main(){
	printf("zadejte radu cisel s mezeram (ukonceno nulou): ");
	
	int vstup;
	int soucet = 0;
	do{
		scanf("%i",&vstup);
		if(vstup > 0)
			soucet += vstup;
	}while(vstup != 0);
	
	printf("soucet je %d",soucet);
	
	return 0;
}

