#include <iostream>
using namespace std;

class Vozidlo{
    private:
        int pocetKol;
        float maxRychlost;
    public:
        Vozidlo(int kola, float rychlost){
            pocetKol = kola;
            maxRychlost = rychlost;
        }

        int getPocetKol(){
            return pocetKol;
        }
        float getMaxRychlost(){
            return maxRychlost;
        }

};


int main(){
    Vozidlo trabant(4,100);
    Vozidlo ferrari(4,200);
    Vozidlo bicykl(2,30);

    printf("Trabant ma %d kol a dosahne rychlosti %.2f km/h \n",trabant.getPocetKol(),trabant.getMaxRychlost());
    printf("Ferrarri ma %d kol a dosahne rychlosti %.2f km/h \n",ferrari.getPocetKol(),ferrari.getMaxRychlost());
    printf("Bicykl ma %d kol a dosahne rychlosti %.2f km/h \n",bicykl.getPocetKol(),bicykl.getMaxRychlost());
    return 0;
}