/*
 * Tableaux : clacul de la moyenne et �cart-type
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
     printf("Tableau � 5 entr�es (float) \n");
        for(i=0;i<5;i++){
            printf("%d-i�me nombre ",i+1);
            scanf("%f",&tab[i]);
        }

     printf("\nCalcul moyenne et �cart-type\n");
     stat(tab,5);

 // !!!! Passage en param�tre !!!! //

 }
