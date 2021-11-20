#include <stdio.h>

int main(){
	int cisloMesice;
	bool vPoradku = false;
	while(vPoradku == false){
		printf("Zadejte poradove cislo mesice: ");
		scanf("%i", &cisloMesice);
		printf("%i", cisloMesice);
		if(cisloMesice >= 1 && cisloMesice <= 12){
			vPoradku = true;
		}
		else{
			printf(" \n zadane cislo neodpovida zadnemu mesici \n");
			vPoradku = false;
		}
	return 0;
	}
	
	printf("\n");
	printf("Vas mesic je: ");

	switch (cisloMesice){
		case 1:
		printf("Leden");
		break;

		case 2:
		printf("Unor");
		break;

		case 3:
		printf("Brezen");
		break;
		
		case 4:
		printf("Duben");
		break;
		
		case 5:
		printf("Kveten");
		break;
		
		case 6:
		printf("Cerven");
		break;
		
		case 7:
		printf("Cervenec");
		break;
		
		case 8:
		printf("Srpen");
		break;
		
		case 9:
		printf("Zari");
		break;
		
		case 10:
		printf("Rijen");
		break;
		
		case 11:
		printf("Listopad");
		break;
		
		case 12:
		printf("Prosinec");
		break;

		default:
		printf("Cislo mimo rozsah");
		break;
	}

	printf("\n\n\n");
	system("PAUSE");

}

