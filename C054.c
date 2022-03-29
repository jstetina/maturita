#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char jmeno [20];
    float vyska;
}Student;

int NAJDI_NEJVYSSIHO(Student studenti[],int pocet_studentu){
    float nejvyssi_vyska = 0.0;
    int index_nejvyssiho;
    int i = 0;
    for(; i < pocet_studentu; i++){
        if(studenti[i].vyska > nejvyssi_vyska){
            nejvyssi_vyska = studenti[i].vyska;
            index_nejvyssiho = i;
        }
    }
    return index_nejvyssiho;
}

int main(){
    int pocet_studentu = 3;

    Student studenti[pocet_studentu];

    for(int i = 0; i < pocet_studentu; i++){
        studenti[i].id = i+1;
        printf("Zadejte hodnoty pro %i. studenta \n",i+1);
        printf("Jmeno studenta: ");
        scanf("%20s",studenti[i].jmeno);
        printf("Vyska studenta: ");
        scanf("%f",&studenti[i].vyska);
    }

    int nejvyssi_student_index = NAJDI_NEJVYSSIHO(studenti,pocet_studentu);

    printf("Nejvyssi student (id=%i) je %s a je vysoky %.2f m",studenti[nejvyssi_student_index].id,studenti[nejvyssi_student_index].jmeno,studenti[nejvyssi_student_index].vyska);
    return 0;  
}