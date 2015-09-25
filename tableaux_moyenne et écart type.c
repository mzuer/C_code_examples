/*
 * Tableaux : clacul de la moyenne et écart-type
 */

 #include <stdio.h>

void stat (float tab[], int n);

void stat (float tab[], int n){

    int i;
    float somme, moyenne, deviation;

        for(i=0,somme=0;i<n;i++){
            somme+=tab[i];
        }

    moyenne=somme/n;

        for(i=0,somme=0;i<n;i++){
            somme+=(tab[i]-moyenne)*(tab[i]-moyenne);
        }

    deviation=somme/n;

    printf("Moyenne=%f\nEcart-type=%f\n",moyenne,deviation);

    return ;
 }

 int main (void){

    float tab[5];
    int i;
     printf("Tableau à 5 entrées (float) \n");
        for(i=0;i<5;i++){
            printf("%d-ième nombre ",i+1);
            scanf("%f",&tab[i]);
        }

     printf("\nCalcul moyenne et écart-type\n");
     stat(tab,5);

 // !!!! Passage en paramètre !!!! //

 }
