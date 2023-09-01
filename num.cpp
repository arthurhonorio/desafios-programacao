#include <iostream>

using namespace std;

int main() {
    int num, r=0;
    
    cin >> num;
    
    int N[num];
    
    for(int i=0; i<num; i++) {
        cin >> N[i];
        
        if((N[i]==0)&&(N[i-1]==0)&&(N[i-2]==1)) {
            r++;
        }
    }

    cout << r << endl;
    
    return 0;
}
