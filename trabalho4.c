#include <stdio.h>
#include <string.h>

int main ()
{
    char T[1025], vet1[1025],vetfinal[1025], vet2[1025], resultado[1025], repeticoes[1025], vetvet[1025];
    int i, j, k, n, r, l, rep=0, res=0;
    
    scanf("%[actg]", T);
    
    scanf("%d", &k);
    
    n = strlen( T );
    
    for(i=0; i<k; i++)
    {
        if(i!='\0')
        {
        vet1[i] = T[i];
        }
        printf("%s", vet1);
        if (strlen(vet1) == k)
        {
        
            for(j=0; j<k; j++)
            {
                if(j!='\0')
                {
                vet2[j] = T[j];
                }
                printf("%s", vet2);
                if(strlen(vet1) == k)
                {
                    r = strcmp(vet1, vet2);
                    
                    if (r=0)
                    {
                        for(int g=0; g<k; g++)
                        {
                            vetvet[g]=vet1[g];
                        }
                        strcat(vetvet, " ");
                        
                    }
                }
            
            }
        }
    }
    
    for (l=0; l<(strlen(vetvet)); l++)
    {
        while (vetvet[l] == vetvet[l+k])
        {
            rep++;
                
            if(rep>=res)
            {
                res=rep;
                
                for(int g=0; g<k; g++)
                {
                    resultado[g] = vetvet[l];
                
                }
                
                strcat(resultado, " ");
            }
        }
        
     }
      
    printf("%s", resultado);





}
