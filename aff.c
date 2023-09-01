#include <stdio.h>

int main () {

    int a;
    printf("digite um número inteiro:");
    scanf("%d", &a);

    if (a % 2 == 0) {

        if (a > 10) {
            printf("SIM\n");
        }

        else {
            printf("NÃO\n");
        }    
    }
    
    if (a % 2 != 0) {

        if (a < 50) {
            printf("SIM\n");
        }

        else {
            printf("NÃO\n");
        }
    }
    
}
