#include <iostream>
using namespace std;

class Zlomek{
    private:
        int citatel;
        int jmenovatel;
    public:
        Zlomek(int citatelVstup, int jmenovatelVstup){
            citatel = citatelVstup;
            jmenovatel = jmenovatelVstup;
        }
        Zlomek(int citatelVstup){
            citatel = citatelVstup;
            jmenovatel = 2;
        }
        Zlomek(){
            citatel = 2;
            jmenovatel = 6;
        }

        void printZlomek(){
            cout << endl;
            cout << " " << citatel << " " << endl;
            cout << "---" << endl;
            cout << " " << jmenovatel << " " << endl;  
            cout << endl;
        }
};


int main(){
    Zlomek zlomek1(1,3);
    Zlomek zlomek2(6);
    Zlomek zlomek3;

    zlomek1.printZlomek();
    zlomek2.printZlomek();
    zlomek3.printZlomek();
    return 0;
}