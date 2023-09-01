#include <stdio.h>

int main () {

    int a, b, c;
    
    printf("digite o primeiro número:");
    scanf("%d", &a);

    printf("digite o segundo número:");
    scanf("%d", &b);

    printf("digite o terceiro número:");
    scanf("%d", &c);

    if ((a>b) && (a>c)) {
        printf("%d", a);
    }

    if ((b>a) && (b>c)) {
        printf("%d", b);
    }

    if ((c>a)&&(c>b)) {
        printf("%d", c);
    }

}
