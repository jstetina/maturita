#include <stdio.h>
#include <windows.h>

struct Zamestnanec{
    int id;
    int plat;
};

int main(){
    int pocet_zamestnancu = 5;
    //printf("zadejte pocet zamestnancu k zapsani: ");
    //scanf("%i", &pocet_zamestnancu);

    struct Zamestnanec zamestnanci[pocet_zamestnancu];

    for(int i = 1; i < pocet_zamestnancu+1; i++){
        printf("\nZamestnanec c. %i\n",i);
        printf("id: ");
        scanf("%i",&zamestnanci[i-1].id);
        printf("plat: ");
        scanf("%i",&zamestnanci[i-1].plat);
        printf("zamestnanec zapsan\n");
        printf("*********\n\n");
    }

    int max = 0;
    int index_zamestnance = 0;
    for(int i = 0; i < pocet_zamestnancu;  i++){
        if(zamestnanci[i].plat > max){
            max = zamestnanci[i].plat;
            index_zamestnance = i;
        }
    }
    printf("Zamestnanec s nejvyssim platovych ohodnocenim: \n");
    printf("id: %i \n",zamestnanci[index_zamestnance].id);
    printf("plat: %i Kc \n",zamestnanci[index_zamestnance].plat);

    return 0;   
}