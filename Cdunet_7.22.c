#include <stdio.h>
main()
{
 /* D�clarations */
     int A[50][50]; /* matrice donn�e   */
     int B[50][50]; /* matrice donn�e   */
     int C[50][50]; /* matrice r�sultat */
     int rowA, colArowB, colB;   /* dimensions des matrices */
     int i, j, k;   /* indices courants */

 /* Saisie des donn�es */

 //Matrice A

 printf("*** Matrice A ***\n");
 printf("Nombre de lignes de   A (max.50) : ");
 scanf("%d", &rowA );
 printf("Nombre de colonnes de A (max.50) : "); //=nbre de colonnes de B
 scanf("%d", &colArowB );
 for (i=0; i<rowA; i++)
    for (j=0; j<colArowB; j++)
        {
         printf("El�ment[%d][%d] : ",i,j);
         scanf("%d", &A[i][j]);
        }

 //Matrice B

 printf("*** Matrice B ***\n");
 printf("Nombre de lignes de   B : %d\n", colArowB); //nbre colonnes A = nbre lignes B
 printf("Nombre de colonnes de B (max.50) : ");
 scanf("%d", &colB );
 for (i=0; i<colArowB; i++)
    for (j=0; j<colB; j++)
        {
         printf("El�ment[%d][%d] : ",i,j);
         scanf("%d", &B[i][j]);
        }
 /* Affichage des matrices */
 printf("Matrice donn�e A :\n");
 for (i=0; i<rowA; i++)
    {
     for (j=0; j<colArowB; j++)
          printf("%d   ", A[i][j]);
     printf("\n");
    }
 printf("Matrice donn�e B :\n");
 for (i=0; i<colArowB; i++)
    {
     for (j=0; j<colB; j++)
          printf("%d   ", B[i][j]);
     printf("\n");
    }

// Calcul du produit matriciel

 /* Affectation du r�sultat de la multiplication � C */
 for (i=0; i<rowA; i++)
     for (j=0; j<colB; j++)
         {
          C[i][j]=0;
          for (k=0; k<colArowB; k++)
               C[i][j] += A[i][k]*B[k][j];
         }

  /* Edition du r�sultat */
 printf("Matrice r�sultat C :\n");
 for (i=0; i<rowA; i++)
    {
     for (j=0; j<colB; j++)
          printf("%d   ", C[i][j]);
     printf("\n");
    }
 return 0;
}
