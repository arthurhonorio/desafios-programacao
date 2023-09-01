#include <iostream>

using namespace std;

int main () {
    int n, f1, f2, r;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> f1 >> f2;
        
        if(f1>f2) {
            r=(f1%f2);
            while(r!=0) {
                f1=f2;
                f2=r;
                r=(f1%f2);
                
            }
            cout << f2 << endl;
            
        }
        if(f1<f2) {
            r=(f2%f1);
            while(r!=0) {
                f2=f1;
                f1=r;
                r=(f2%f1);
                
            }
            cout << f1 << endl;
        }
    }
    return 0;   
}
