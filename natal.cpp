#include<iostream>

using namespace std;

int main () {
    int n, a=0;
    string A;
    
    cin >> n;
    getline(cin, A);
    
    for(int i=0; i<n; i++){
        getline(cin, A);
        
        for(int j=0; j<A.size(); j++){
            if(A[i]=='o' && A[i+1]=='u' && A[i+2]=='l'){
                if(A[i+3]=='u' && A[i+4]=='p' && A[i+5]=='u'){
                    if(A[i+6]=='k' && A[i+7]=='k'){
                        A[i-1]='J';
                        A[i+8]='i';
                        a++;
                    }
                }
            }
            
        }
        if(
        cout << A << endl;
    }
    
    
    
    
    
    

    return 0;
}
