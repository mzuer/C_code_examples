/*
 * 7.7 transférer valeurs d'un tableau A bidim MxN à tableau C unidim N*M
 */


 #include <stdio.h>

 int main(void){

    int tab[50][50],tab2[50*50];
    int dim1,dim2,i,j,dim=0;

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
            tab2[dim]=tab[i][j];
            dim++;
        }
    }

    printf("\nNouveau tableau, de taille %d (%d x %d)\n",dim,dim1,dim2);

    for(i=0;i<dim;i++){
        printf("%d   ",tab2[i]);
    }


return 0;
 }
