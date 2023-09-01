#include <iostream>

using namespace std;

int main () {
    
    int a, m;
    
    cin >> a;
    cin >> m;
    
    if ((a + m) <= 50 && (a && m) >= 1) {
        cout << "S\n";
    }
    else {
        cout << "N\n";
    }
    
    return 0;
}
