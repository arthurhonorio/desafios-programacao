#include <iostream>

using namespace std;

int main () {
    int n, c, m, r=0;
    cin >> n >> c >> m;
    int X[c], Y[m];
    
    for(int i=0; i<c; i++) {
        cin >> X[i];
    }
    
    for(int i=0; i<m; i++) {
        cin >> Y[i];
    }
        
    //for pra comparar vetores
    for(int i=0; i<c; i++){
    
        for(int j=0; j<m; j++){
            if(X[i]==Y[j]) {
                X[i]=0;
            }
        }   
    }
    for(int i=0; i<c; i++) {

        if(X[i]!=0) {
            r++;
        }
    
    }

    cout << r << endl;
    
return 0;
}
