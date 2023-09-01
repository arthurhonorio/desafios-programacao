#include <stdio.h>

int main () {

    int i, n, ac;
    ac = 0;
    
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        ac = ac + i;
    }
    
    printf("%d\n", ac);



return 0;

}
