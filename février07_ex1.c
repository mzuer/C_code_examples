/*
 * Fonction d'Ackermann
 */

#include <stdio.h>

double A (int m, int n);

int main (void){

    printf("%lf",A(1,1));


}


double A (int m, int n){

if(m==0)
    return n+1;

else if (m>0,n==0)
    return A(m-1,1);

else if (m>0,n>0)
    return A(m-1,A(m,n-1));

}


