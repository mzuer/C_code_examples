/*
 * 7.11 Insérer une valeur dans un tableau trié
 */

 #include <stdio.h>
 #define DIM 7

int main(void){

    int tab[DIM+1]={1,4,8,15,18,19,20};
    int valeur,i,pos=0;

    printf("Entrez une valeur à placer entre 1 et 20 ");
    scanf("%d",&valeur);

    while(valeur<1||valeur>20){
        printf("\nEntre 1 et 20 ! ");
        scanf("%d",&valeur);
    }

    for(i=0;i<DIM;i++){
        if(tab[i]<valeur)
            pos++;
    }

    printf("\nValeur saisie doit aller en position %d\n",pos+1);

    for(i=DIM;i>pos;i--){
        tab[i]=tab[i-1];
    }
    tab[pos]=valeur;

    for(i=0;i<DIM+1;i++){
        printf("%d   ",tab[i]);
    }



return 0;
}
