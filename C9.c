#include <stdio.h>


int main(){
	char vstup;
	printf("stisknete libovolnou klavesu: ");
	scanf("%c",&vstup);	
    
	switch(vstup){
		case 'a':
        case 'b':
        case 'c':
		    printf("znak1");
		break;
		
		case 'd':
		    printf("znak2");
		break;
		
		default:
		    printf("znak3");
		break;
	}
    return 0;
}
	
