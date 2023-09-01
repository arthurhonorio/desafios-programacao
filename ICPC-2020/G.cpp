#include<iostream>

using namespace std;

int main () {
    int N;
    cin >> N;
    
    int i, num, maior=100, ac=100;
    for(i=0; i<N; i++){
        cin >> num;
        ac+=num;
        if(ac>maior) maior = ac;
        
    }
    
    cout << maior << endl;

    return 0;
}

