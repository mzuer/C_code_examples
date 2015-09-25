/*
 * 7.6 : tableau à 2 dimensions : remplir, afficher et
 * calculer la somme pour chaque ligne et chaque colonne
 */


 #include <stdio.h>

 int main(void){

    int tab[50][50];
    int dim1,dim2,i,j,somme=0,somme_ligne=0,somme_colonne=0;

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


    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            somme_ligne+=tab[i][j];
        }
        printf("\nSomme ligne %d : %d",i+1,somme_ligne);
        somme_ligne=0;
    }

    for(j=0;j<dim2;j++){
        for(i=0;i<dim1;i++){
            somme_colonne+=tab[i][j];
        }
        printf("\nSomme ligne %d : %d",i+1,somme_colonne);
        somme_colonne=0;
    }


 return 0;
 }
