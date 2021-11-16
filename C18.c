//rekurze faktorial
#include <stdio.h>


unsigned long faktorial(int vstup){
	long n = (long)vstup;
	if(n == 1 || n== 0){
		return 1;
	}
	else{
		return (n * faktorial(n-1));
	}
}

int main(){
	int vstup;
	unsigned long vystup;
	
	printf("zadejte n: ");
	scanf("%i",&vstup);
	
	vystup = faktorial(vstup);
	printf("n! = %lu",vystup);
	return 0;
}
