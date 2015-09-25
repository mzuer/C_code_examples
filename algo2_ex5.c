/*
 * Calcul d'une fonction sin(x), dvpmt en série
 *** sin(x)=(-1)^n*x^(2n+1)/(2n+1)!
 *** sinus comme suite d'additions de facteurs de x
 */

#include <stdio.h>
#include <math.h>

int factorielle (int n);

int main(void){

    float y;
    double x, result,facteur,precision=10e-15;
    int n;

    printf("Entrez la valeur de x ");
    scanf("%f",&y);

    x=y;

    printf("\nRésultat avec la librairie C\n");
    printf("sin(%f)=%f\n",x,sin(x));

    //Développement en série

    result=0;
    n=0;
    facteur=9999;

    while(facteur>precision){
        facteur=pow(x,(2*n)+1)/factorielle((2*n)+1);
        result+=(pow(-1,n)*facteur);
        printf("%d:   sin(%f)=%lf   facteur=%lf\n",n,y,result,facteur);
        n++;
    }

return 0;
}

int factorielle (int n){

    int i;
    double facto=1;

    for(i=1;i<=n;i++){
        facto*=i;
    }

    return facto;
}


