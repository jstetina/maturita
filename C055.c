#include <stdio.h>

typedef struct{
    int id;
    int plat;
}zamestnanec;

zamestnanec nejvyssi_plat(zamestnanec zamestnanci [], int pocet_zamestnancu){
    int max_plat = zamestnanci[0].plat;
    int max_index;
    int i;
    for(i = 0; i < pocet_zamestnancu;i++){
        if(zamestnanci[i].plat > max_plat){
            max_plat = zamestnanci[i].plat;
            max_index = i;
        }
    }
    zamestnanec zam_s_nejvyssim_platem;
    zam_s_nejvyssim_platem.id = zamestnanci[max_index].id;
    zam_s_nejvyssim_platem.plat = zamestnanci[max_index].plat;

    return zam_s_nejvyssim_platem;
    }


int main(){
    int pocet_zamestnancu = 3;
    zamestnanec zamestnanci[pocet_zamestnancu];
    zamestnanec zam_s_nejvyssim_platem;

    printf("zadejte udaje o %i zamestnancich\n",pocet_zamestnancu);
    for(int i = 0; i < pocet_zamestnancu; i++){
        printf("%i. zamestnanec \n",i+1);
        zamestnanci[i].id = i+1;
        printf("id: %i\n",zamestnanci[i].id);
        printf("plat: ");
        scanf("%i", &zamestnanci[i].plat);
        printf("\n");
    }

    zam_s_nejvyssim_platem = nejvyssi_plat(zamestnanci,pocet_zamestnancu);
    printf("Nejvyssi plat ma zamestnanec (id:%i), platove ohodnoceni: %i kc",zam_s_nejvyssim_platem.id,zam_s_nejvyssim_platem.plat);

    return 0;
}