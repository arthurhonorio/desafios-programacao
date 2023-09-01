#include<iostream>

using namespace std;

int main () {
    char a, b=0;
    string frase;
    int resposta = 0;
    while(cin >> a){
        getline(cin,frase);
        
        for(int i=0; i<frase.size(); i++){
            if((frase[i]==a||frase[i]==a+32||frase[i]==a-32)&&frase[i-1]==' '){
                if(b!=a && b!=a+32 && b!=a-32)resposta++;
                b=a;
            }
            else if(i>0&&frase[i-1]==' ') {
                b=0;
                a=frase[i];
            }
         //   if(frase[i]==a||(frase[i]<91&&frase[i]==a+32)||(frase[i]>96&&frase[i]==a-32))
            
        
        }
        
        cout << resposta << endl;
    
        resposta=0;
    }




    return 0;
}
