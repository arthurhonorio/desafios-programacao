#include<iostream>

using namespace std;

int main() {
    int C, A;
    
    cin >> C >> A;
    
    int q = A/(C-1);
    int resto = A%(C-1);
    int resp = q;
    if (resto>0) resp++;
    
    cout << resp << endl;



    return 0;
}
