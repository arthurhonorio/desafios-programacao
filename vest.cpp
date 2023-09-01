#include<iostream>

using namespace std;

int main () {
    int i, resp, j, n, ml[2]={0,0}, mc[2]={0,0};
    
    cin >> n;
    
    int  m[n][n], lin[n], col[n];
    
    for(i=0; i<n; i++){
        lin[i]=0;
        col[i]=0;
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> m[i][j];
            lin[i]+=m[i][j];
            col[j]+=m[i][j];
        }
    }
    
    for(i=0; i<n; i++){
        if(lin[i]>ml[0]) {
            ml[0]=lin[i];
            ml[1]=i;
        }
        
        if(col[i]>mc[0]) {
            mc[0]=col[i];
            mc[1]=i;
        }
    }
    
    resp=ml[0]+mc[0]-(2*m[ml[1]][mc[1]]);
    
    cout << resp << endl;
    
    return 0;
}
