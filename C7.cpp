#include <Math.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

bool pokracovat = true; 
bool change = false;
char pokracovatAnoNe;

int main(){
	int a,b,c;
	int D;
	float x1,x2;
	
	printf("Program pro vypocet kvadraticke rovnice: \n\n\n");

	while(pokracovat == true){
	change = false;
	pokracovat = false;
	pokracovatAnoNe = '0';
	
	Sleep(300);
	printf("zadejte koeficienty a,b,c z rovnice ve tvaru ax^2 + bx + c \n");
	Sleep(300);
	
	printf("A: ");
	scanf("%i",&a);
	Sleep(300);
	
	printf("B: ");
	scanf("%i",&b);
	Sleep(300);
	
	printf("C: ");
	scanf("%i",&c);
	printf("\n");
	Sleep(300);
	
	printf("zpracovavam");
	for(int i = 0; i < 5; i++){
		printf(".");
		Sleep(500);
	}
	
	D = pow(b,2) - (4*a*c);
	if(D > 0){
		x1 = (-b+sqrt(D)) / (2*a);
		x2 = (-b-sqrt(D)) / (2*a);
	}
	
	if(D == 0){
		x1 = -b / (2*a);
		x2 = x1;
	}
	
	
	printf("\n\n\n");
	
	if(D >= 0){
		printf("KORENY ROVNICE %ix^2 + %ix + %i: \n",a,b,c);
		if(D > 0){
			printf("x1 = %.2f \n",x1);
			printf("x2 = %.2f \n", x2);
		}
		if(D == 0){
			printf("x1 = x2 = %.2f",x1);
		}
}
	else if(D < 0){
		printf("D < 0: rovnice nema v R zadne koreny");
	}
	
	
	
	while(change != true){
	printf("\n\n\nCHCETE POKRACOVAT (A/N): ");
	scanf(" %c",&pokracovatAnoNe);
	if(pokracovatAnoNe == 'A' || pokracovatAnoNe == 'a');{
	pokracovat = true;
	change = true;
	Sleep(1500);
	}
	if(pokracovatAnoNe == 'N' || pokracovatAnoNe == 'n'){
	printf("nashledanou");
	pokracovat = false;	
	change = true;
	Sleep(1000);
	}
	printf("\n\n");
}
	
	
	
}
}
