#include <stdio.h>

int main () {

    int a, b, c;
    
    printf("digite três números diferentes\no primeiro número:");
    scanf("%d", &a);

    printf("o segundo número:");
    scanf("%d", &b);

    printf("o terceiro número:");
    scanf("%d", &c);

    if (a!=b!=c) {

        if ((a>b)&&(b>c)) {
            printf("%d, %d, %d\n", a, b, c);
        }

        if ((a>c)&&(c>b)) {
            printf("%d, %d, %d\n", a, c, b);
        }

        if ((b>a)&&(a>c)) {
            printf("%d, %d, %d\n", b, a, c);
        }

        if ((b>c)&&(c>a)) {
            printf("%d, %d, %d\n", b, c, a);
        }

        if ((c>a)&&(a>b)) {
            printf("%d, %d, %d\n", c, a, b);
        }

        if ((c>b)&&(b>a)) {
            printf("%d, %d, %d\n", c, b, a);
        }

    }
    else //o else não está funcionando
    {
        printf("os três números não são diferentes\n");
    }
return 0;

}
