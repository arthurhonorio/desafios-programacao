#include <iostream>

using namespace std;

int main () {
    
    int n, r=0, p;
    
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cin >> p;
        if(p!=1) r++;
    
    }
    
    cout << r << endl;
    
    return 0;
}
