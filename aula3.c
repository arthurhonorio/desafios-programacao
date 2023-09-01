#include <stdio.h>
/*
int main(){

    int n;
    scanf("%d", &n);

    int i;
    for(i=0; i<n; i++) {
        printf("%d\t", i);
    }
    printf("\n)



return 0;
}
*/

int main(){
    
    int n, i, valor, soma;
    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        scanf("%d", &valor);
        soma += valor;

    }  
    
    printf("%d\n", soma);


return 0;
}













