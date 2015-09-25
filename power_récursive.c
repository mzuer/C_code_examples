/*
 * RECURSIVITE : fonction power
 */

 #include <stdio.h>

float power (float x, int n);


int main (void){

    int base, puissance;
    float resultat;

    printf("Le chiffre x à la puissance n");
    printf("\nx >"); scanf ("%d",&base);
    printf("\nn>"); scanf("%d",&puissance);

    resultat=power(base, puissance);

    printf("\nx à la puissance n vaut %f",resultat);

    return 0;
}


float power (float x, int n){

  if (n==0)       // if (n==1)       // mieux avec n==1 => fait 1 appel en moins !
    return 1;    //      return x ;

  else
    return power(x,n-1)*x;


}
