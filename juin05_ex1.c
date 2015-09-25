/*
 * Tri décroissant
 */


#include <stdio.h>

void tri(double tab[],int n);

int main (void){

    double tab[8]={2,7,4,9,3,6,1,8};

    tri(tab,8);


}


void tri(double tab[],int n){

    int i,j;
    double temp;

    for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(tab[j]>tab[i]){
                    temp=tab[i];
                    tab[i]=tab[j];
                    tab[j]=temp;
                }
            }
    }

    for(i=0;i<n;i++){
        printf("%lf    ",tab[i]);
    }

return ;
}
