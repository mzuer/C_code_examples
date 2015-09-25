/*
 * 6.1 Lire et afficher somme, produit et moyenne d'entiers entrés au clavier
 */

#include <stdio.h>

int main(void){

    int quantite;

    printf("Nbre de chiffres saisis :");
    scanf("%d",&quantite);
    avec_while(quantite);
    printf("\n");
    avec_do_while(quantite);
    printf("\n");
    avec_for(quantite);
    printf("\n");

return ;

}

void avec_while (int N){

    int i=0,nbre,somme=0,produit=1;

    if(N==0)
        return;

    while(i<N){
        printf("\nNbre %d :",i+1);
        scanf("%d",&nbre);
        somme+=nbre;
        produit*=nbre;
        i++;                // PAS OUBLIER L'INCREMENTATION !!!
    }

    printf("\nSomme : %d, Moyenne : %f, Produit : %d",somme,(float)somme/N,produit);

    return ;
}

void avec_do_while(int N){

    int i=0,nbre,somme=0,produit=1;

    if(N==0)
        return ;

    do{
        printf("\nNbre %d :",i+1);
        scanf("%d",&nbre);
        somme+=nbre;
        produit*=nbre;
        i++;
    }

    while(i<N);

    printf("\nSomme : %d, Moyenne : %f, Produit : %d",somme,(float)somme/N,produit);

return ;

}

void avec_for(int N){

    int i,nbre,somme=0,produit=1;

    if(N==0)
        return ;

    for(i=0;i<N;i++){
            printf("\nNbre %d :",i+1);
            scanf("%d",&nbre);
            somme+=nbre;
            produit*=nbre;
    }

    printf("\nSomme : %d, Moyenne : %f, Produit : %d",somme,(float)somme/N,produit);

return ;
}

/*La structure for est la plus compacte et celle qui exprime le mieux l'idée de l'algorithme.
D'autre part, elle permet d'intégrer très confortablement l'initialisation et l'incrémentation
des variables dans la structure*/
