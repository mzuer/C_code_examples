/*
 * ITERATION FOR (8.7) : suite par récurrence
 */

#include <stdio.h>

float suite(int n);

int main (void){

    int n;

    printf("calculer le nième nombre >");
    scanf("%d",&n);

    printf("Le nième terme de la suite vaut %f",suite(n));

return 0;
}

float suite(int n){

    float u=1.0;    // on peut aussi mettre for(u=1.0, i=0;...)
    int i;

    for(i=0;i<n;i++){   //ou for(i=1;i<=n;...)

        u=2*sqrt(u+1)-1;

    }

return u;
}
