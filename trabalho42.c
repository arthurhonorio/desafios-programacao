#include <stdio.h>
#include <string.h>

int main ()
{
    char T[1025], vet1[1025], vet2[1025], resultado[1025], repeticoes[1025], vetvet[1025];
    int i, j, k, n, l, rep=0, res=0;
    
    fgets(T, 1024, stdin);
    
    scanf("%d", &k);
    
    n = strlen( T );
    
    for(i=0; i<k; i++)
    {
        if(i!='\0')
        {
        vet1[i] = T[i];
        }
        
        if (strlen(vet1) == k)
        {
        
            for(j=0; j<k; j++)
            {
                if(j!='\0')
                {
                vet2[j] = T[j];
                }
                
                if(strlen(vet1) == k)
                {
                    r = strcmp(vet1, vet2);
                    
                    if (r=0)
                    {
                        strcat(vetvet, i);
                        
                    }
                }
            
            }
        }
    }
    
    for (l=0; l<(strlen(vetvet)); l++)
    {
        while (vetvet[l] == vetvet[l+1])
        {
            rep++;
        
        }
        if(rep>=res)
        {
            res=rep;
            strcat(resultado, vetvet[l]);
            
        }
     }
      
    for (int g=0; g<(strlen(vetvet)); g++)
    {
        printf("%s", vetvet[g]);
    }












}
