#include <stdio.h>

struct zamestnanec{
    int id;
    int plat;
};

struct zamestnanec nejvyssi_plat(struct zamestnanec zamestnanci [], int pocet_zamestnancu){
    int max_index = zamestnanci[0].plat;
    for(int i = 0; i < pocet_zamestnancu;i++){
        if(zamestnanci[i].plat > max_index){
            max_index = zamestnanci[i].plat;
        }
    }
    struct zamestnanec nejvyssi_plat;
    nejvyssi_plat.plat = zamestnanci[max_index].plat;

    return nejvyssi_plat;
}


int main(){
    int pocet_zamestnancu = 5;
    struct zamestnanec zamestnanci[pocet_zamestnancu];
    struct zamestnanec zam_s_nejvyssim_platem;

    printf("zadejte udaje o %i zamestnancich\n",pocet_zamestnancu);
    for(int i = 0; i < pocet_zamestnancu; i++){
        printf("%i. zamestnanec \n",i+1);
        printf("id: ");
        scanf("%i", &zamestnanci[i].id);
        printf("plat: ");
        scanf("%i", &zamestnanci[i].plat);
        printf("\n");
    }

    zam_s_nejvyssim_platem = nejvyssi_plat(zamestnanci,pocet_zamestnancu);
    printf("Nejvyssi plat ma zamestnanec (id:%i), platove ohodnoceni cini %i kc",zam_s_nejvyssim_platem.id,zam_s_nejvyssim_platem.plat);

    return 0;
}