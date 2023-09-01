#include<iostream>

using namespace std;

int main (){
    int d, x;
    cin>>d;
    int i, j;
    int tab[d][d], lin[d], col[d];
    
    i=d;
    while(i--){
        lin[i]=0;
        col[i]=0;
    }
    
    for(i=0; i<d; i++) {
        for(j=0; j<d; j++){
            cin >> x;
            tab[i][j] = x;
            lin[i]+=x;
            col[j]+=x;            
        }
    }
    
    int temp=0, max=0;
    for(i=0; i<d; i++) {
        for(j=0; j<d; j++){
            temp=lin[i]+col[j]-(2*tab[i][j]);
            if(temp>max) max=temp;
        }
    }
    
    cout << max << endl;

    return 0;
}
