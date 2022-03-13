#include <stdio.h>

int main(){
	int cisloMesice;
	char mesice [12][20] = {"Leden","Unor","Brezen","Duben","Kveten","Cerven","Cervenec","Srpen","Zari","Rijen","Listopad","Prosinec"};
	
	printf("Zadejte poradove cislo mesice: ");
	scanf("%i", &cisloMesice);
	printf("\n");

	if(cisloMesice >= 1 && cisloMesice <= 12){
		printf("%i. mesic je %s",cisloMesice,mesice[cisloMesice-1]);
	}

	else{
		printf("Cislo musi byt v rozmezi 1-12");
	}
	return 0;
}

