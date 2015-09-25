/*
 * 7.10 chercher min et max des valeurs d'un tableau, retourner valeur et position
 */


 #include <stdio.h>

 int main(void){

    int tab[50];
    int dim,i,j,min,min_i=0,max,max_i=0;

    printf("Taille du tableau : ");
    scanf("%d",&dim);
    printf("Saisir un tableau de taille %d \n",dim);

    for(i=0;i<dim;i++){
            printf("\nValeur pour tab[%d] ",i);
            scanf("%d",&tab[i]);
        }


    printf("Vous avez rempli le tableau suivant\n");

    for(i=0;i<dim;i++){
            printf("%d     ",tab[i]);
        }



    //Recherche du min et max
    min=tab[0];
    max=tab[0];

    for(i=0;i<dim;i++){

        if(tab[i]>max){
            max=tab[i];
            max_i=i;
        }

        else if (tab[i]<min){
            min=tab[i];
            min_i=i;
        }

    }
    printf("\nMaximum : %d en position %d\nMinimum : %d en position %d",max,max_i+1,min,min_i+1);

return 0;
}

