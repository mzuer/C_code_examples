/*
 * 7.10 Variante chercher min et max des valeurs d'un tableau, retourner valeur et position
 * Pour un tableau à 2 dimensions
 */


 #include <stdio.h>


 int main(void){

    int tab[50][50];
    int dim1,dim2,i,j,min_i=0,max_i=0,min,max;

    printf("Taille de ixj : ");
    scanf("%d %d",&dim1,&dim2);
    printf("Saisir un tableau de taille %d \n",dim1*dim2);

    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("\nValeur pour tab[%d][%d] ",i,j);
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



    //Recherche du min et max
    min=tab[0][0];
    max=tab[0][0];

    for(i=0;i<dim1;i++){
            for(j=0;j<dim2;j++){
        if(tab[i][j]>max){
            max=tab[i][j];
            max_i=i*dim2+j;
        }

        else if (tab[i][j]<min){
            min=tab[i][j];
            min_i=i*dim2+j;
        }
    }
    }
    printf("\nMaximum : %d en position %d\nMinimum : %d en position %d",max,max_i+1,min,min_i+1);

return 0;
}

