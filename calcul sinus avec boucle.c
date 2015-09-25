/*
 * Calcul du sinus d'un angle avec boucle for
 *** Décomposition en sommes ***
 */

#include <stdio.h>
#include <math.h>

int main(void){

    float x,z,w,u,U,epsilon=0.000001;
    int i;

    //Lire l'angle

    printf("Angle (en degrés) :");
    scanf("%f",&x);

    //Convertir en gradients
    x=fmod(x,360.0)/180.0*M_PI;

    //Initialisations
    z=-2;
    w=0;
    u=x;
    U=x;

    for(i=0;;i++){
        z+=8;
        w+=z;
        u=-u*x*x/w;
        U+=u;

        if ((i>fabs(x/2))&&(fabs(u)<epsilon)) {

            printf("\nRésultat : %f (après %d itérations)\n",U,i+1);
            return 0;


        }

    }
}
