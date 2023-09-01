#include <stdio.h>

int main () {

    int vet[10], i, maior, j, aux,k,pos;
    
    for (i=0;i<10;i++)
    {
        scanf("%d", &vet[i]);
    }
    for (j=0;j<10;j++) {
        aux = vet[j];
        for (k=0;k<10;k++) {
            if (aux<vet[k]) {
            maior=vet[k];
            pos = k;
            }
        }
    }
    printf("%d\n", pos);
    
 

return 0;

}
