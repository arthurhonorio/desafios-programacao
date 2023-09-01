#include <iostream>

using namespace std;

int main () {
    int n, l, c;
    
    cin >> n;
    
    int f[n][n], b[2*n], b2[2*n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> f[i][j];
        }
    }
    
    for(int i=0; i<2*n; i++) {
        cin >> l >> c;
        b[i]=f[l][c];
        b2[i]=f[l][c];
    }
    
    
    for(int i=0; i<2*n; i++) {
        for(int j=0; j<2*n; j++) {
            if(i>j){
                if(b[i]==b2[j]){
                    b2[j]=0;
                }
            }
        }
    
    
    }
    for(int i=0; i<2*n; i++) {
        cout << b2[i] << endl;
    }
    
    
    return 0;
}



// 1 2 3 2 1 2 
// 1 2 3 2 1 2 

// 6 igualdades
