#include <Math.h>
#include <stdio.h>


int main(){
	int a,b,c;
	int D;
	float x1,x2;
	
	printf("Program pro vypocet kvadraticke rovnice: \n\n\n");
	
	printf("zadejte koeficienty a,b,c z rovnice ve tvaru ax^2 + bx + c \n");
	
	printf("A: ");
	scanf("%i",&a);
	
	printf("B: ");
	scanf("%i",&b);
	
	printf("C: ");
	scanf("%i",&c);
	
	D = pow(b,2) - (4*a*c);
	
	printf("\n");
	printf("RESENI KVADRATICKE ROVNICE: \n");

	if(D > 0){
		x1 = (-b+sqrt(D)) / (2*a);
		x2 = (-b-sqrt(D)) / (2*a);
		printf("x1 = %.2f \n",x1);
		printf("x2 = %.2f \n", x2);		
	}
	else if(D == 0){
		x1 = -b / (2*a);
		x2 = x1;
		printf("x1 = x2 = %.2f",x1);
	}
	else{
		printf("Rovnice nema v R zadne koreny\n");
	}
	return 0;
}

	


