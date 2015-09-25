/*
 * ITERATION FOR : pour une fonction donnée, trouver les min et max
 * entre 0 et N-1 (N passé en paramètre) ; et écrire une fonction qui
 * compte le nombre de valeurs de f(i) entre -a et a avec i entre 0 et N-1
 * pour i passé en paramètre
 */

#include <stdio.h>
#include <math.h>

double fct (int n);
double max(int N);
int nbre (int N, double a);

int main(void){

    int N,N2,a;

    printf("Chercher le max entre 0 et N, N = ");

    scanf("%d",&N);

    printf("\nLe max de la fonction entre 0 et %d vaut : %f",N,max(N));

    printf("\nPour f(i) entre 0 et N-1, N :");
    scanf("%d",&N2);
    printf("\nNbre de valeurs entre -a et a, a:");
    scanf("%d",&a);

    printf("\nEntre -%d et %d, il y a %d valeurs de f(i) pour entre 0 et %d",a,a,nbre(N2,a),N-1);

return 0;
}

double fct (int n){

    float f;
    f=150.0*sin(n)/(double)(n+1);       // ou .../(n+1.0)

return f;
}

double max(int borne_sup){

    int i;
    float max=fct(0);

    for(i=0;i<borne_sup;i++){

        if(fct(i)>max){
            max=fct(i);
        }
    }
return max;

}

/* peut aussi s'écrire :


double max(int N){
    int i;
    double fi, maxi = fct(0);

    for (i = 1; i < N; i++){
        fi = fct(i);
        if (fi > maxi)
        maxi = fi;
    }
return maxi;
}

*/
//Nbre de valeurs entre -a et a pour f(i) entre 0 et N-1

int nbre (int N, double a){

    int i,nb;
    nb=0;
    for(i=0;i<N;i++){
        if(fabs(fct(i))<=a)
        {
            nb++;
        }
}
return nb;
}
