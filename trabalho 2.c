#include <stdio.h>

int main () {
    int N, M, a, b, c, d, aux = 0;
    scanf("%d %d", &N &M);
    
    for( , N <= M, N++) {
        a = N/1000;
        b = (N - (a * 1000)) / 100;
        c = (N - (( N / 100) * 100)) / 10;
        d = (N - (( N / 10) * 10));
        
        if (a!=b!=c!=d) {
            aux++;
        }
        
        }
        }
