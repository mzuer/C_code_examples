/*
 * RECURSIVITE : PGDC récursif
 */

#include <stdio.h>

int ChoixMois (void);

int main (void){

    int a,b,resultat;


    printf ("Entrez deux nombres dont vous voulez connaitre le PGDC >");
    scanf ("%d %d",&a,&b);

    resultat=pgdc (a,b);

    printf("\nLe PGDC est %d",resultat);

    printf("\nLe PGDC est %d",pgdc2(a,b));

    printf("\nLe PGDC est %d",pgdc_it(a,b));

    printf("\nLe PGDC est %d",pgdc2_it(a,b));


    return 0;
}


int pgdc (int m, int n){

    if (n==0){
        return m;
    }
    else {
        return pgdc(n,m%n);
    }

}

int pgdc2 (int m, int n){

    if (m%n==0){
        return n;
    }
    else {
        return pgdc2(n,m%n);
    }

}

int pgdc_it (int m, int n){
    int temp;
    while (n!=0){
        temp=n;
        n=m%n;
        m=temp;
    }

return m;
}

int pgdc2_it (int m, int n){
    int temp;
    while (m%n!=0){
        temp=n;
        n=m%n;
        m=temp;
    }

    return n;

}
