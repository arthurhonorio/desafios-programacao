#include <stdio.h>
int main(){
    int m, n;
    scanf("%d %d",&m, &n);
    m = m * n;
    n = m / n;
    m = m / n;
    printf("%d %d\n", m, n);
}
