#include <stdio.h>

int main () {

    float vet[10], soma=0, media;
   
    for (int i=0;i<10;i++)
    {
        scanf("%f", &vet[i]);
    }
    
    for(int j=0;j<10;j++)
    {
        soma += vet[j];
    }
    
    media=soma/10;
    
    printf("%f\n", media);

return 0;

}
