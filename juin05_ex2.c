#include <stdio.h>
#include <math.h>

double f(double n, double b);

int main (void){

    double n=2,b=3;

    printf("%lf",f(n,b));


}

double f(double n, double b){

    return pow(exp(n*log(b)),2);

}
