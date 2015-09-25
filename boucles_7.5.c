/*
 * BOUCLES & TABLE ASCII
 *** Afficher sur des lignes successives les codes ASCII
     avec les caract�res qui leur correspondent (de debut � fin)
     Et afficher sur un joli tableau de n colonnes ***
 */


 #include <stdio.h>

 int main (void){

    int debut, fin,colonnes;
    int i=0, j=0;

    do{
    printf("Commencer au caract�re n� : ");
    scanf("%d",&debut);

    printf("\nJusqu'au caractere n�: ");
    scanf("%d",&fin);

    printf("\nDans � un tableau � n colonnes : ");
    scanf("%d",&colonnes);
    }
    while(debut<0 || fin<0 || colonnes<0);



for(i=debut;i<fin;i+=colonnes){
    for(j=0;j<colonnes;j++){
/* mettre la condition parce que comme il fait des sauts selon le nbre de colonnes,
il affiche sinon la ligne enti�re, e.g. si on va de 65 � 90, il affichera 91 pour
finir de compl�ter la ligne */
    if(i+j<=fin)
        printf("%d : %c\t",i+j,i+j);
    }

   printf ("\n");


    }

    return 0;
 }
