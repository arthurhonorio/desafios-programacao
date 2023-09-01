/*
    declarar n, valor, ac1=1, ac2=1;
    cin n
    
    cin v1
   
    for de n vezes {
        cin valor2
        
        if v1==v2 {ac1++;}
        if v1!=v2 {
            if (ac2 == 1){
                ac2=ac1;
                ac1=1;
             } 
            else if (ac1 > ac2){
                ac2 = ac1;
                ac1 = 1;
            }
            if (ac2 > ac1) {
                ac1 = 1
            }
        }
        v1=v2
    }
    cout << ac2
*/

#include <iostream>

using namespace std;

int main () {
    
    long int N, v1, v2, ac1=1, ac2=1;
    
    cin >> N;
    
    cin >> v1;
    
    for (int i=1; i < N; i++) {         //ac1 = 1 ac2= 4
        
        cin >> v2;
        
        if (v1==v2) {
            ac1++;
        }
        if (v1!=v2) {
            if (ac2 == 1) {
                ac2 = ac1;
                ac1 = 1;
            }
            else if (ac2 < ac1) {
                ac2=ac1;
                ac1=1;
            }
            else {
                ac1=1;
            }
        }
        v1=v2;
    }
    if (ac1 > ac2) {
        ac2 = ac1;
    }
    cout << ac2 << endl;
    
    return 0;
}



/*
    no incremento do for, é possivelcolocar uma função
    quando a variavel é sobrescrevida, o incremento deixa de existir,
     mas o loop continua.

*/
