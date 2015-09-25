/*
 * 7.5 : tableau à 2 dimensions : remplir, afficher et calculer la somme
 */


 #include <stdio.h>

 int main(void){

    int tab[50][50];
    int dim1,dim2,i,j,somme=0;

    printf("Taille de ixj : ");
    scanf("%d %d",&dim1,&dim2);
    printf("Saisir un tableau de taille %d \n",dim1*dim2);

    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("\nValeur pour tab[%d][%d]",i,j);
            scanf("%d",&tab[i][j]);
        }
    }

    printf("Vous avez rempli le tableau suivant\n");

    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("%d     ",tab[i][j]);
        }
    printf("\n");
    }

    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            somme+=tab[i][j];
        }
    }

    printf("\nLa somme de tous les chiffres du tableau vaut %d",somme);





 return 0;
 }
