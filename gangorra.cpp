//quer saber se a gangorra ta equilibrada ou nao
//pra qual lado a gangorra descerá

#include <iostream>

using namespace std;

int main () {
    int p1, c1, p2, c2;
    
    cin >> p1 >> c1 >> p2 >> c2;
    
    if ((p1*c1) == (p2*c2)) {
        cout << "0\n";
    }
    
    if ((p1*c1) > (p2*c2)) {
        cout << "-1\n";
    }
    
    if ((p1*c1) < (p2*c2)) {
        cout <<"1\n";
    }

    return 0;
}
