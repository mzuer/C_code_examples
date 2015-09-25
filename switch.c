/*
 * Structure de sélection : switch
 *** nombre de jours d'un mois ***
 */


#include <stdio.h>

int NombreJours (int mois);
int ChoixMois (void);

int main (void){

    int mois_choisi;
    int jours;

    mois_choisi=ChoixMois();

    while(mois_choisi<1||mois_choisi>12)
    {
         mois_choisi=ChoixMois();
    }

    jours=NombreJours(mois_choisi);
    printf("ce mois a %d jours",jours);


    return 0;
}

int ChoixMois (void){

    int mois;

    printf("combien de jours a le mois (chiffre entre 1 et 12 >");
    scanf("%d",&mois);

    return mois;
}

    int NombreJours (int mois){
    int nb_jours;

    switch (mois) {

    case 2:
        nb_jours=28;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        nb_jours=30;
        break;

    default:
        nb_jours=31;
    }

    return nb_jours;

}

