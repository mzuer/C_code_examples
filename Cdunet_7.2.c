/*
 * 7.2 remplir un tableau et supprimer les 0
 */

#include <stdio.h>


int main(void) {
 /* Déclarations */
 int tab[50]; /* tableau donné    */
 int dim     /* dimension        */
 int i,j;

 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &dim );
 for (i=0; i<dim; i++)
    {
     printf("Elément %d : ", i);
     scanf("%d", &tab[i]);
    }
 /* Affichage du tableau */
 printf("tableau donné : \n");
 for (i=0; i<dim; i++)
     printf("%d ", tab[i]);
 printf("\n");

 /* Copier tous les éléments de i vers j et */
 /* augmenter j pour les éléments non nuls. */
 for (i=0, j=0 ; i<dim ; i++){
      tab[j] = tab[i];
      if (tab[i]){      // si tab[i] n'est pas nul => on augmente j
        j++;
        }
     }
 /* dimouvelle dimension du tableau ! */
 dim = j;
  /* Edition des résultats */
 printf("tabableau résultat :\n");
 for (i=0; i<dim; i++)
     printf("%d ", tab[i]);
 printf("\n");
 return 0;
}
