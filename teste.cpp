#include<iostream>

using namespace std;

int main(){
    
    int N, cont=0;
    cin >> N;
    int vet[N];
    
    int i;
    for(i=0; i<N; i++){
     cin >> vet[i];
        
    }
    
    for(i=0; i<N-2; i++){
     	  if(vet[i]==1&&vet[i+1]==0&&vet[i+2]==0){
              cont++;
          }
    }
    cout << cont << endl;
    
    return 0;
}
