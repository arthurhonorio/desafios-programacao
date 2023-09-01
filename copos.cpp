#include <iostream>

using namespace std;

int main () {
    
    int n, l, c, total = 0, i = 0;
    
    cin >> n;
    
    /*
    ler quantas bandejas
    verificar se quebrou copo
        comparar copos e bandejas
            guardar numero de coposquebrados
        comparar copos e bandejas
            loop de acordo com numero de bandejas
    */
        
    while (i < n) {
        cin >> l >> c;
        
        if (l > c) {
            total = total + c;
        }
        
        i++;
    }
    
    cout << total << endl;    
    

    return 0;
}
