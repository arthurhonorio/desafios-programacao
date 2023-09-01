#include <iostream>

using namespace std;

int main () {
    int m, h=0;
    
    cin >> m;
    
    while(m>=60) {
        m-=60;
        h++;
    }
    
    cout << h << endl << m << endl; 
    
    return 0;
}
