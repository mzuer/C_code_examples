#include <stdio.h>

#define EPSILON 0.001


double f (double n);

int main (void){

    printf("%lf",f(36));


return 0;
}


double f (double n){

    double x, new_x;

    x=n;

    while(1){

        new_x=0.5*(x+n/x);

        if(fabs(x-new_x)<EPSILON)
            return x;

        x=new_x;

    }
}


