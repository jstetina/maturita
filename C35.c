#include <stdio.h>
#include <math.h>

void get_Area(int a, int * S){
	*S = pow(a,2);
}

void get_perimeter(int a, int * o){
	*o = 4*a;
}


int main(){
	int a;
	int o,S;
	printf("zadejte vstup a:" );
	scanf("%d",&a);
	get_Area(a,&S);
	get_perimeter(a,&o);
	
	printf("area = %d \n",S);
	printf("perimeter = %d",o);
	
	return 0;

}
