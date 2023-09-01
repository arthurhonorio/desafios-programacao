#include <iostream>

using namespace std;

int main () {
    int n, c, s, cx, ac=1, r=0;
    
    cin >> n >> c >> s;
    
    for(int i=0; i<c; i++) {
        cin >> cx;
        
        ac+=cx;        
        
        if(ac==0) {
            ac=n;
        }
        
        if(ac==n+1) {
            ac=1;
        }
     
        if(ac==s) {
            r++;
        }
        
    }
    
    if(s==1) {
        r+=1;
    }
    
    cout << r << endl;
    
    return 0;
}
