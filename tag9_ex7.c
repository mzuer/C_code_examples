/*
 * Fonction qui prend 2 tableaux en argument, renvoie la somme de toutes les valeurs
 */

 #include <stdio.h>
 #define DIM 5

 int main(void){

     int tab1[DIM],tab2[DIM],i;

     printf("Remplir tab1\n");
     for(i=0;i<DIM;i++){
        scanf("%d",&tab1[i]);
     }

     printf("Remplir tab2\n");
     for(i=0;i<DIM;i++){
        scanf("%d",&tab2[i]);
     }

    printf("La somme de tous les éléments du tableau vaut : %d",somme_tab(tab1,tab2));

    printf("\nTableau de la somme pour chaque index :");
    tab_add(tab1,tab2);

 }

//Somme de tous les éléments

 int somme_tab(int t1[], int t2[]){ //on peut aussi écrire int *t1, int *t2

     int i,somme=0;

     for(i=0;i<DIM;i++){
     somme+=t1[i]+t2[i];
     }
return somme;

 }

 //Troisième tableau, pour chaque index, somme des 2

 void tab_add(int t1[],int t2[]){

    int tab3[DIM],i;

    for(i=0;i<DIM;i++){
        tab3[i]=t1[i]+t2[i];
    }

    for(i=0;i<DIM;i++){
        printf("%d\n",tab3[i]);
    }

 return;
 }
