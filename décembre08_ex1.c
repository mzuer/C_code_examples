#include <stdio.h>

float pente(float a, float b, float c, float x);

int main(void){

    int a=3,b=-4,c=-2,x=-4;

    printf("%f\n",pente(a,b,c,x));



return 0;
}

float pente(float a, float b, float c, float x){

        float pente=2*a*x+b;

    return pente;


}
