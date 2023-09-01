#include <iostream>
#include <string>

using namespace std;

int main () {
    
    string A;
    
    int n;
    int sp=0, pt=0;
    cin >> n;
    
    getline(cin, A);
    
    while(A[0]==' ') {
        A.erase(0, 1);
    }
    
    for(int i=0; i<n; i++) {
        
        sp=0;
        pt=0;    
        
        getline(cin, A);
        
        
        for(int x=0; x<A.size(); x++) {
            
            if(A[x]==' ') {
                sp++;
            }
        }
        
        if(A[0]=='.' && A[1]=='.' && A[2]=='.') {
            
            pt=3;
        }
        
        if(A[0]=='.' && A[1]=='.' && A[2]!='.') {
            pt=2;
        }
    
        if(A[0]=='.' && A[1]!='.' && A[2]!='.') {
            pt=1;
        }
        
        if(A==".") {
        cout << "a"<< endl;
        continue;
        }
        
        if(A=="..") {
        cout << "b"<< endl;
        continue;
        }
        
        if(A=="...") {
        cout << "c"<< endl;   
        continue;
        }
        sp*=3;
        sp+=pt;
        int g=1;

        cout <<(char)('a'-1+sp) << endl;

        sp=0;
        pt=0; 
     }
        
    return 0;
}




