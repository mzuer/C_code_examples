/*
 * ITERATION FOR (8.5): CONVERTIR DEGRE-FAHRENHEIT
 */

 #include <stdio.h>

 int main(void){

    int i;

    for(i=0;i<=300;i+=10){

        printf("%d degrés : %f\n",i,(5*(i-32.0)/9.0));

    }

 return 0;
 }
