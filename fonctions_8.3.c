/*
 * DESSINER LE SAPIN AVEC 2 NOUVELLES FONCTIONS
 *** 1) POUR DESSINER LA RAMURE DU SAPIN (?)
 *** 2) POUR DESSINER LE TRONC
 */

#include <stdio.h>
#include <stdlib.h>
// Dessin de la ramure du sapin
    void ramure (int clignes) {
    int i=0, j=0;

    for (i=1; i<=clignes; i++) {

        for (j=0; j<clignes-i; j++){
            printf("*");
        }
        for (j=1; j<= (i*2-1); j++){
            printf(" ");
        }
    printf("\n");
    }
}
// Dessin du tronc du sapin
void tronc (int pos_t) {
    int i=0, j=0;
    for (j=1; j<=3; j++) {
        for (i=1; i<=pos_t; i++) {
            printf (" ");
        }
    printf ("@@@\n");
}
}

int main () {
    int nb_lig = 15;
    ramure (nb_lig);
    tronc (nb_lig - 2);
return 0;
}
