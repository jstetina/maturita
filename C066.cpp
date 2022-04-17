#include <iostream>
#include <string.h>
using namespace std;

class Zdravice{
    private:
        string jmeno;
        string pozdrav;
    
    public:
        Zdravice(string jmenoVstup){
            jmeno = jmenoVstup; 
        }

        void setPozdrav(string pozdravVstup){
            pozdrav = pozdravVstup;
        }

        void pozdravNas(){
            if(pozdrav != ""){
               cout << pozdrav << ", ja jsem " << jmeno << endl;
            }
            else{
                cout << "ERROR: nebyl zadan pozdrav";
            }
        }
};


int main(){
    Zdravice petr("Petr");
    petr.setPozdrav("Ahoj");

    Zdravice pavel("Pavel");
    pavel.setPozdrav("Cau");

    Zdravice karel("Karel");
    karel.setPozdrav("Dobry den");

    petr.pozdravNas();
    pavel.pozdravNas();
    karel.pozdravNas();

    return 0;
}