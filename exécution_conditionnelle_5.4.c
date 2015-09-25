/*
 * EXECUTION CONDITIONNELLE (5.4) : EQUATION DU 2EME DEGRE
 */

#include <stdio.h>

int main (void){

    float a,b,c,delta,racine1,racine2;
    printf("Entrez a,b et c (ax^2+bx+c) :");
    scanf("%d %d %d",&a,&b,&c);

    delta=b*b-4*a*c;

    if(delta==0.0){
        racine1=-b/(2*a);
        printf("racine unique : x=%f\n",racine1);
    }

    if (delta>0.0){
        racine1=(-b-sqrt(delta))/(2*a);
        racine2=(-b+sqrt(delta))/(2*a);
        printf("racine 1 : x=%f\nracine 2 : x=%f\n",racine1,racine2);
    }

    if (delta<0.0){
        printf("pas de racine réelle\n");
    }

return 0;
}
