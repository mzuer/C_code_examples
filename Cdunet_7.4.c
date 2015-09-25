/*
 * 7.4 : remplir un tableau, remplir tableaux avec nbres + et -
 */

#include <stdio.h>

int main(void){

    int tab[50],tab_pos[50],tab_neg[50];
    int dim=0,dim_neg=0,dim_pos=0;
    int i;

    printf("Dimension du tableau :");
    scanf("%d",&dim);

    for(i=0;i<dim;i++){
        printf("\nvaleur %d : ",i+1);
        scanf("%d",&tab[i]);
    }

    printf("Tableau rempli : \n");

    for(i=0;i<dim;i++){
        printf("%d  ",tab[i]);
    }

    for(i=0;i<dim;i++){

        if(tab[i]<0){
            tab_neg[dim_neg]=tab[i];
            dim_neg++;
        }
        else if (tab[i]>0){
            tab_pos[dim_pos]=tab[i];
            dim_pos++;
        }

    }

    printf("\nTableau entiers positifs\n");
    for(i=0;i<dim_pos;i++){
        printf("%d  ",tab_pos[i]);
    }
    printf("\nTableau entiers négatifs\n");
    for(i=0;i<dim_neg;i++){
        printf("%d  ",tab_neg[i]);
     }


return 0;
}
