#include <iostream>

using namespace std;

int main () {
    
    int N , A, tAcessos, tDias, i =0;
    
    tAcessos = 0;
    tDias = 1;
    
    cin >> N;
    
    while (i < N) {
        cin >> A;
        
        tAcessos = tAcessos + A;
        
        if (tAcessos < 1000000) {
            tDias++;
        }        

    i++;
    }
    
    cout << tDias << endl;

    return 0;
}

/*  
    ler numero N de dias a ser inserido
    total de dias = 1
        loop pra ler os dias
            ler primeiro dia acumulado
                comparar com 1M
                    se deu 1M, nao faz nada
                    se nao deu 1M, acumular +1 dia
            ler segundo dia no loop
        retorna total de dias                    
            

*/
