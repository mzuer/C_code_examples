/*
 * TRI RAPIDE
 *** choisir un pivot, séparer en un ensemble plus petit et un ensemble plus grand
 *** trier indépendamment les 2 ensembles et réunir pour obtenir un tableau trié
 */

 #include <stdio.h>

int partition(int tab[],int inf, int sup);
void tri_rapide_rec(int tab[],int inf,int sup);
void tri_rapide (int tab[],int n);
void echange (int *x, int *y);

int main (void){

    int tableau[]={3,5,1,4,2};
    tri_rapide(tableau,5);

return 0;
}
 int partition(int tab[],int inf, int sup){

    int pivot,g,d;

    pivot=tab[inf];
    g=inf+1;
    d=sup;

    while(g<=d){
        if(tab[g]<=pivot){
            g++;
        }
        else {
            echange(&tab[g],&tab[d]);
            d--;
        }
    }

    echange(&tab[inf],&tab[d]);
    return d;

 }

 void tri_rapide_rec(int tab[],int inf,int sup){

    int p;
    if(inf<sup){
        p=partition(tab,inf,sup);
        // Tri partie sup et partie inf de manière récursive
        tri_rapide_rec(tab,inf,p-1);        // partie de gauche
        tri_rapide_rec(tab,p+1,sup);        // partie de droite
    }

 return ;
 }

 void tri_rapide (int tab[],int n){

    tri_rapide_rec(tab,0,n-1);

// Afficher le tableau
    int i;
    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }

 return ;
 }

 void echange (int *x, int *y){

    int tmp;

    tmp=*x;
    *x=*y;
    *y=tmp;

return;
}
