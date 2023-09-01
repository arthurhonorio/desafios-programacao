#include <iostream>

using namespace std;

int main() {
    int n;
    int N[n], R[n];
    cin >> n;    
    for(int i=0; i<n; i++) {
        cin >> N[i];        
    }

    for(int i=0; i<n; i++){
        if(i==0){
            R[i]=N[i]+N[i+1];
        }
        else if(i==(n-1)){
            R[i]=N[i-1]+N[i];
        }
        else {
            R[i]=N[i-1]+N[i]+N[i+1];
        }
        
        cout << R[i] << endl;
    }    

    return 0;
}

