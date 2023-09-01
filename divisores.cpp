/*
    descobrir totod os divisores de um numero
    int numero, ac = 0
    ler o numero
    
    
    for de  int i =0 >numero; i++ { 
        if ((numero%i)==0) {
            cout << i << " ";
        }
        cout << endl;
    }
  
    

*/


#include <iostream>

using namespace std;

int main () {
    
    int N;
    
    cin >> N;
    
    for (int i=1; i<=N; i++) {
        
        if ((N%i)==0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}



/*
    no incremento do for, é possivelcolocar uma função
    quando a variavel é sobrescrevida, o incremento deixa de existir,
     mas o loop continua.

*/
