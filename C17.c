#include <stdio.h>

int main(){
	printf("zadejte radu cisel s mezeram (ukonceno nulou): ");
	
	int vstup;
	float prumer = 0;
    int counter = 0;

	do{
		scanf("%i",&vstup);
		prumer += (float)vstup;
        counter++;
	}while(vstup != 0);
	prumer /= (float)counter-1;

	printf("prumer zadanych cisel je %.2f",prumer);
	
	return 0;
}