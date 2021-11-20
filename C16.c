#include <stdio.h>

int main(){
	printf("zadejte radu cisel s mezeram (ukonceno nulou): ");
	
	int vstup;
    int max;

	do{
		scanf("%i",&vstup);
        if(vstup > max){
            max = vstup;
        }
	}while(vstup != 0);
	
	printf("maximalni hodnota je  %d",max);
	
	return 0;
}

