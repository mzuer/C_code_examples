/*
 * 7.16 : Statistique de plusieurs notes pour plusieurs �l�ves
 */


#include <stdio.h>

int main(void){

    float tab[30][30],min,max,somme=0;
    int i,j,eleve,notes,min_i=0,max_i=0;

    printf("nbre d'�l�ves : ");
    scanf("%d",&eleve);

    printf("nbre de notes : ");
    scanf("%d",&notes);

    for(i=0;i<eleve;i++){
            printf("El�ve %d - saisir les notes :\n",i+1);
                for(j=0;j<notes;j++){
                    scanf("%f",&tab[i][j]);
                }
            printf("\n");
    }


    printf("\nOn a donc les notes suivantes :\n");

    for(i=0;i<eleve;i++){
            printf("Eleve %d :\n",i+1);
                for(j=0;j<notes;j++){
                    printf("%f   ",tab[i][j]);
                }
            printf("\n");
    }

    printf("\nMoyenne par �l�ve : \n");

    for(i=0;i<eleve;i++){
            printf("Eleve %d : ",i+1);
                for(j=0;j<notes;j++){
                    somme+=tab[i][j];
                }
            printf("moyenne de %f",(float)somme/notes);
            somme=0;
            printf("\n");
    }

    min=tab[0][0];
    max=tab[0][0];

    for(i=0;i<eleve;i++){
        for(j=0;j<notes;j++){
            if(tab[i][j]<min){
                min=tab[i][j];
                min_i=i;
            }
            if(tab[i][j]>max){
                max=tab[i][j];
                max_i=i;
            }

        }
    }

    printf("La meilleure note est %f par l'�l�ve %d,\nla pire est %f par l'�l�ve %d",max,max_i+1,min,min_i+1);


return 0;
}
