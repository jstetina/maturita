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

    cout << "Trabant ma " << trabant.getPocetKol() << "kola a dosahne rychlosti " << trabant.getMaxRychlost() <<  "km/h \n";
    cout << "Ferrari ma " << ferrari.getPocetKol() << "kola a dosahne rychlosti " << ferrari.getMaxRychlost() <<  "km/h \n";
    cout << "Bicykl ma " << bicykl.getPocetKol() << "kola a dosahne rychlosti " << bicykl.getMaxRychlost() <<  "km/h \n";
    return 0;
}