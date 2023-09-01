#include <stdio.h>

int main () {

    int a;
    
    printf("prato 1: arroz\nprato 2: brocolis\nprato 3: carne\nprato 4: ovos\n5 para sair\no que você deseja?\n");
   
    scanf("%d", &a);
    
    while ((a<5)&&(a>0))
    {
        if(a==1)
            printf("tá aqui o seu arroz\n");
        if(a==2)
            printf("tá aqui o seu brocolis\n");
        if(a==3)
            printf("tá aqui a sua carne\n");
        if(a==4)
            printf("tá aqui os seus ovos\n");

        scanf("%d", &a);
    }
    while((a>5)||(a<1))
    {
        printf("não tem essa opção\n");
        scanf("%d", &a);
    }   

return 0;

}
