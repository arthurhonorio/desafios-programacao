#include <iostream>

using namespace std;

int main () {
    
    int i1=0, i2=0, Ni, N;
    
    cin >> Ni;
    
    for (int i=0; i<Ni; i++) {
    
        cin >> N;
        
        if (N==1) {
            if (i1==0) {
                i1=1;
            }
            else if (i1==1) {
                i1=0;
            }
        }
        
        if (N==2) {
            if (i1==0) {
                i1=1;
            }
            else if (i1==1) {
                i1=0;
            }
            
            if (i2==0) {
                i2=1;
            }
            else if (i2==1) {
                i2=0;
            }
        
        }
    
    }
    
    cout << i1 << endl << i2 << endl;
   

    return 0;
}



/*
    no incremento do for, é possivelcolocar uma função
    quando a variavel é sobrescrevida, o incremento deixa de existir,
     mas o loop continua.

*/
