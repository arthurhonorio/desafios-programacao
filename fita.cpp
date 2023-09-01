#include <iostream>

using namespace std;

int main() {
    int n, a=0;
    
    cin >> n;
    
    int fita[n], dir[n], esq[n];
    //for pra preencher fita de entrada
    for(int i=0; i<n; i++) {
        cin >> fita[i];
        esq[i]=10;
        dir[i]=10;
    }
    //for pra preencher fita com numeros a direita do 0
    for (int i=0; i<n; i++) {
        
        if(
    
        if(fita[i]==0) {
            dir[i]=fita[i];
        }
       
        else {
            dir[i]=dir[i-1]+1;
        }
    }
    //for pra preencher fita com numeros a esquerda do 0
    for (int i=n-1; i>=0; i--) {
        if(fita[i]==0) {
            esq[i]=fita[i];
        }
        
        else {
            esq[i]=fita[i+1]+1;
        }
    }
    cout << "fita direita\n";
    for(int i=0; i<n; i++) {
        cout << dir[i] << endl;
        
    }
    
    cout <<"fita esquerda\n";
    for(int i=0; i<n; i++) {
        cout << esq[i] << endl;
    }
    
    return 0;
}
