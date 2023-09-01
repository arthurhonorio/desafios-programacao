#include<iostream>
#include<stack>

using namespace std;

int main () {
    stack<int> trem, pilha;
    int i, x, y, stop=0, start=1, z, resp=0;
    
    while(cin>>x){
        if(x==0) break;

           

        if(start) {
            
            while(!trem.empty()) trem.pop();
            while(!pilha.empty()) pilha.pop();
            
            for (i=x; i>0; i--) {
                trem.push(i);
            }
            start=0;
        }
        
        while(cin>>y){
            
            if(y==0) {
                start=1;   
                break;
            }
            
            if(!trem.empty()) {
                if(trem.top()==y) trem.pop();
            }
            else if(!pilha.empty()){
                if(pilha.top()==y) pilha.pop();
                }
            else {
                
                z=trem.size();
                
                for(i=0; i<z; i++){
                    pilha.push(trem.top());
                    trem.pop();
                    if(pilha.top()==y) {
                        pilha.pop();
                        break;
                    }
                }
            
            }
            if(trem.empty()&&pilha.top()!=y) resp=-1;
            
        }
    
    }
    
    if(resp==-1) cout << "No\n";
    else cout << "Yes\n";

//cout << "ate aqui foi\n";


    return 0;
}
