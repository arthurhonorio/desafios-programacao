#include <iostream>

using namespace std;

int main () {
    
    double raio;
    
    cin >>raio;
    
    double pi;
    
    pi = 3.14159;
    
    cout.precision(2); //indico a precisão da saída
    cout.setf(ios::fixed);
    
    cout << "a area eh " << raio*raio*pi << "\n";
    
    return 0;
}
