#include <stdio.h>

double pot(double a, int b);

int main () {
    double a, aux=1;
    int b;
    scanf("%lf %d", &a, &b);
    
    double pot(double a, int b){

            while(b!=0){
                aux=aux*a;
                b--;
            }
            if(b==0) printf("%lf", aux);
    }
printf("%lf", aux);
}

