#include <iostream>

using namespace std;

int main() {

    while(true) {
        int b, n;
        
        cin >> b >> n;
        
        if((b==0)&&(n==0)) {
            break;
        }
        
        int fundo[b];
        
        for(int i=1; i<=b; i++){
            cin >> fundo[i];
        }
        
        for(int i=1; i<=n; i++) {
            int d, c, v;
            
            cin >> d >> c >> v;
            
            fundo[d] -= v;
            fundo[c] += v;
        }
        
        int ajuda = 0;
        
        for(int i=1; i<=b; i++)
            if(ajuda>fundo[i]) {
                ajuda = 1;
            }
        if(ajuda==0) {
            cout << "S\n";
        }
        else {
            cout << "N\n";
        }
    }
    
    return 0;
}
