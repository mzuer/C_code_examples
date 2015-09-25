/*
 * 7.13 : Fusion de 2 tableaux triés dans un 3ème tableau trié
 */

#include <stdio.h>
#define DIM1 7
#define DIM2 8

int main(void){

    int tab1[DIM1]={1,4,8,15,18,19,20},tab2[DIM2]={2,3,9,13,17,21,22,25};
    int tab3[DIM1+DIM2];
    int tab1_i=0,tab2_i=0,tab3_i=0,i;


    printf("Les 2 tableaux :\n");
    for(i=0;i<DIM1;i++){
        printf("%d    ", tab1[i]);
    }
    printf("\n");
    for(i=0;i<DIM2;i++){
        printf("%d    ", tab2[i]);
    }

/*Fusionner tab1 et tab2 dans tab3, lui aussi trié*/


 tab1_i=0; tab2_i=0; tab3_i=0;

 while ((tab1_i<DIM1) && (tab2_i<DIM2))
        if(tab1[tab1_i]<tab2[tab2_i])
            {
             tab3[tab3_i]=tab1[tab1_i];
             tab3_i++;
             tab1_i++;
            }
        else
            {
             tab3[tab3_i]=tab2[tab2_i];
             tab3_i++;
             tab2_i++;
            }
 /* Si tab1_i ou tab2_i sont arrivés à la fin de leur tableau, */
 /* alors copier le reste de l'autre tableau.          */
 while (tab1_i<DIM1)
        {
         tab3[tab3_i]=tab1[tab1_i];
         tab3_i++;
         tab1_i++;
        }
 while (tab2_i<DIM2)
        {
         tab3[tab3_i]=tab2[tab2_i];
         tab3_i++;
         tab2_i++;
        }

 /* Edition du résultat */
 printf("\nTableau résultant de la fusion :\n");
 for (i=0; i<DIM1+DIM2; i++){
     printf("%d   ", tab3[i]);
 }
 printf("\n");
 return 0;
}


