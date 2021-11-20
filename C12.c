#include <stdio.h>

int main(){
	int counter;
	float celsius, fahrenheit, kelvin;
	
	printf("Tabulka teplotnich stupnic \n");
	printf("Celsius\t\tKelvin\t\tFahrenheit \n\n");	
	
	for(counter = -50; counter <= 50; counter += 20){
		celsius = (float)counter;
		fahrenheit = (celsius * 1.8) + 32;
		kelvin = celsius + 273.16;
		
		printf("%+0.0f C\t\t%.2f K\t%+0.2f F\n", celsius,kelvin,fahrenheit);
	}
	return 0;	
	
}