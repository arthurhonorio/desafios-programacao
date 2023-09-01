#include <stdio.h>

int main () {

    int a, b, i, n;
    
    scanf("%d", &a);
    scanf("%d", &b);

    n = a;

    for(i=1; i<b; i++)
    {
        n*=a;
    }

    printf("%d\n", n);

return 0;

}
