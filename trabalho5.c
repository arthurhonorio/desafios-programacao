#include <stdio.h>
#include <string.h>

int func (char vet[][254], int tam, char poke[254])
{
       for(int i=0; i<tam; i++)
       {
            if(strcmp(vet[i], poke)==0) return i;
       }
        return -1;
}
 
int max=0;
for(int i=0; i<tam; i++)
{
    if(cont[i]>max) max=cont[i];
}
return max;


int main ()
{
    
    int tem, num, i, cont[151], tam=0, max;
    char dici[151][254], poke[254];
    
    while (0==0)
    {
        tam = 0;
        scanf("%d", &num);
        if (num == 0) 
        {
            return 0;
        }

        for(i=0; i<num;i++)
        {
                scanf("%s", poke);
                tem=func(dici, tam, poke);
                if(tem==-1)
                {
                    strcpy(dici[tam], poke); cont[tam]=1; tam++; 
                }
                else 
                {
                    cont[tem]++;
                }
         }
        
         printf("Falta(m) %d pomekon(s).\n", (151 - tam));
         
         max = maior(cont, tam);
         
         printf("Pomekon(s) mais repetido(s): ");
         
         for (i = 0; i < tam; i++) 
         {
            if (cont[i]==max) 
            {
                printf("%s ", dici[i]);
            
            }
            
         
         } 
         printf("\n\n");
     }    
     
}
