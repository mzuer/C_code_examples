/*
 * Fonction "power" avec boucle while
 */

#include <stdio.h>

float power(float x, int n);
float power2(float x, int n);
float power3(float x, int n);
float power4(float x, int n);
float power5(float x, int n);

int main (void)
{
    float resultat,resultat2,resultat3,resultat4,resultat5;
    int base, puissance;

    printf("Le chiffre x à la puissance n");
    printf("\nx >"); scanf ("%d",&base);
    printf("\nn>"); scanf("%d",&puissance);

    resultat=power(base,puissance);

    printf("\nx à la puissance n vaut %f",resultat);

    resultat2=power2(base,puissance);

    printf("\nx à la puissance n vaut %f",resultat2);

    resultat3=power3(base,puissance);

    printf("\nx à la puissance n vaut %f",resultat3);


    resultat4=power4(base,puissance);

    printf("\nx à la puissance n vaut %f",resultat4);


    resultat5=power5(base,puissance);

    printf("\nx à la puissance n vaut %f",resultat5);


return 0;
}

float power(float x, int n){

    float d=1.0;

    while(n-->0)
        d*=x;

return d;
}

float power2(float x, int n){

    float d=1.0;

    while(--n>=0)
        d*=x;

return d;
}


float power3(float x, int n){

    float d=1.0;

    while(n>0){
        d*=x;
        n--;
        }

return d;
}


float power4(float x, int n){

    float d=1.0;

    while(n>0){
        d*=x;
        --n;
    }
return d;
}

float power5(float x, int n){

    float d=1.0;
    int i=0;

    while(++i<=n){
        d*=x;
    }
return d;
}

