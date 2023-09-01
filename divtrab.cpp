#include<iostream>

using namespace std;

int main () {
    int N, i, j, a=0, b;
    int soma=0, dif, temp;
    
    while(cin>>N) {
        int vet[N];
        for(i=0; i<N; i++){
            cin >> vet[i];
            soma+=vet[i];
        }
        
        dif=soma+1;
        
        for(i=0; i<N-1; i++){
            
            a+=vet[i];
            b=soma-a;
            
            
            if(a>b) temp = a-b;
            if(a<=b) temp = b-a;
            
            if(temp<dif) dif = temp;
                    
        }
        
        cout << dif << endl;
        
        a = 0;
        soma = 0;
    }
    return 0;
}
