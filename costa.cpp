#include<iostream>

using namespace std;

int main (){
    int M, N;
    cin >> M >> N;
    
    char mapa[M+2][N+2];
    
    int i, j;
    
    for(i=0; i<M+2; i++){
        for(j=0; j<N+2; j++){
            mapa[i][j]='.';   
        }
    }
    
    for(i=1; i<M+1; i++){
        for(j=1; j<N+1; j++){
            cin >> mapa[i][j];   
        }
    }
    

    for(i=0; i<M+2; i++){
        for(j=0; j<N+2; j++){
            
            if(mapa[i][j]=='#'){
                if(mapa[i][j-1]=='.') mapa[i][j]='C';
                if(mapa[i][j+1]=='.') mapa[i][j]='C';
                if(mapa[i-1][j]=='.') mapa[i][j]='C';
                if(mapa[i+1][j]=='.') mapa[i][j]='C';
            } 
        }
    }
    int resposta=0;
    for(i=0; i<M+2; i++){
        for(j=0; j<N+2; j++){
            if(mapa[i][j]=='C') resposta++;
        }
    }
    
    cout << resposta << endl;
    
    return 0;
}




