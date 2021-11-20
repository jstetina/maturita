#include <stdio.h>

int main(void){
	char c;
	printf("zadejte posloupnost znaku: ");
	while(c != '*'){
		c = getchar();
		
		switch(c){
			case ' ':
			case '\t':
				printf("#");
				break;
			default:
				printf("%c",c);
				break;
		}
    }
	return 0;
}
