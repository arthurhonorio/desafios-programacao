#include <stdio.h>

int main () {
    int N, M, a, b, c, d, aux = 0;
    
    scanf("%d %d", &N, &M);
    
    
    while ((N&&M)!=0) {
        
        for( ; N <= M; N++) {
            a = N/1000;
            b = (N - (a * 1000)) / 100;
            c = (N - (( N / 100) * 100)) / 10;
            d = (N - (( N / 10) * 10));
            
            
            if ((a!=0)&&(a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)) {
                aux++;
                printf("if 1\n");
            }
            
            if ((a==0)&&(b!=0)&&(b!=c)&&(b!=d)&&(c!=d)){
                aux++;
                printf("if 2\n");
            }
            
            if ((a==0)&&(b==0)&&(c!=0)&&(c!=d)){
                aux++;
                printf("if 3\n");
            }
            
            if ((a==0)&&(b==0)&&(c==0)){
                aux++;
                printf("if 4\n");
            }
            
        }
            printf("%d\n", aux);
            scanf("%d %d", &N, &M);
            aux = 0;
    }
}
