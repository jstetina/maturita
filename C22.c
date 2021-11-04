#include <stdio.h>

int main (){
    //mala nasobilka
    printf("MALA NASOBILKA: \n\n");
    for (int radek = 1; radek <= 10; radek++){
        for(int sloupec = 1; sloupec <= 10; sloupec++){
            printf("%i\t",radek*sloupec);
        }
        printf("\n");
    }

    //velka nasobilka
    printf("VELKA NASOBILKA:\n\n");
    for (int radek = 11; radek <= 20; radek++){
        for(int sloupec = 11; sloupec <= 20; sloupec++){
            printf("%i\t",radek*sloupec);
        }
        printf("\n");
    }

    return 0;
}