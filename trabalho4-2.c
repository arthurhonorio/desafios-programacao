#include <stdio.h>
#include <string.h>

int main ()
{
    char T[1025], vet1[1025], vet2[1025];
    int k;
    
    scanf("%[actg]", T);
    
    scanf("%d", &k);
    
    for(int i=0; i<k; i++)
    {
        vet1[i] = T[i];
    
    }
    
    printf("%s", vet1);
    
}
