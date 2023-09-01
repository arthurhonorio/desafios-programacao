#include <stdio.h>

int main () {

    int n, d1, d2, d3, d4, a;
    d1 = d2 = d3 = d4 = 0;
    scanf("%d", &n);

    if (n>=1000) {
        d1 = n / 1000;
        
        while (n>=1000) {
            n = n - 1000;
        }
    }

    if ((n>=100)&&(n<1000)) {
        d2 = n / 100;
        
        while (n>=100) {
            n = n - 100;
        }

    }

    if ((n<100)&(n>=10)) {
        d3 = n/10;
        while (n>=10) {
            n = n - 10;
        }
    } 

    if (n<10) {
        d4 = n;

    }

    printf("%d %d %d %d\n", d1, d2, d3, d4);


    if ((d1!=d2)&&(d1!=d3)&&(d1!=d4)&&(d2!=d3)&&(d2!=d4)&&(d3!=d4)) {
        a = d1*1000+d2*100+d3*10+d4;

    printf("%d\n", a);
}





}
