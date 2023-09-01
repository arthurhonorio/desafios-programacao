#include <iostream>

using namespace std;

int main () {
    int r=0;
    string A;
    
    cin >> A;
    
    for(int i=0; i<A.size(); i++) {
        
        if(A[i]=='z'||A[i]=='Z') {
            if(A[i+1]=='e'||A[i+1]=='E'){
                if(A[i+2]=='l'||A[i+2]=='L'){
                    if(A[i+3]=='d'||A[i+3]=='D'){
                        if(A[i+4]=='a'||A[i+4]=='A'){
                            r=1;
                        }
                    }
                }
            }
        }
    
    }
    
    if(r==1) {
        cout << "Link Bolado\n";
    }
    else {
        cout << "Link Tranquilo\n";
    }

    return 0;
}
