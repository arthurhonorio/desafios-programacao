//parouimpar
//se divide por 2, é par. se não, é ímpar

#include <iostream>

using namespace std;

int main () {
    int b, c;
    
    cin >> b;
    cin >> c;
    
    if (((b+c) % 2) == 0) {
        cout << "Bino\n";
    }
    
    else {
        cout << "Cino\n";
    }

    return 0;
}
