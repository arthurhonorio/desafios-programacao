#include<iostream>

using namespace std;

int main () {
    int N, D, L, R, C, i, j, nav, cont=0, ac=0;
    int matriz[10][10];
    cin >> N;
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            matriz[i][j]=0;
        }
    }
    
    for(i=0; i<N; i++) {
        cin >> D;
        cin >> L;
        cin >> R;
        cin >> C;
        
        ac+=L;
        
        if(D==0){
            nav = C;
            while(nav<C+L){
                matriz[R][nav]++;
                nav++;
            }            
        }
        
        if(D==1){
            nav = R;
            while(nav<R+L) {
                matriz[nav][C]++;
                nav++;
            }
        }
    
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            cout << matriz[i][j] << " ";
            
            if (matriz[i][j]==1) cont++;
            if (matriz[i][j] > 1) {
                cout << "N\n";
                return 0;
            }
        }
        cout << endl;
    }
   // cout << cont << endl <<ac;
    if(cont==ac) cout << "Y\n";
    else cout << "N\n";

    return 0;
}

