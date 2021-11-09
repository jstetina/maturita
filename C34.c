
#include <stdio.h>
#include <math.h>

#define PI M_PI


void get_obvod(float r,float * o){
	*o = 2*PI*r;
}

void get_obsah(float r,float * S){
	*S = PI*pow(r,2);
}


int main(){
	float r;
	float o,S;
	printf("zadejte polomer kruhu: ");
	scanf("%f",&r);
	
	get_obvod(r,&o);
	get_obsah(r,&S);
	
	printf("\nObvod kruhu je %.2f",o);
	printf("\nObsah kruju je %.2f",S);
	
	return 0;
}


