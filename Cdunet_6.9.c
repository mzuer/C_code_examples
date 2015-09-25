/*
 * 6.9 : inverser un nombre saisi au clavier
 */

#include <stdio.h>

int main(void){

 int  nbre_saisi;
 int  nbre_inverse;

 /* Attention: en utilisant le type int, il est impossible */
 /* d'inverser correctement des nombres comme 10033 ...    */

 do
   {
     printf("Entrez un nombre positif (<10000) : ", nbre_saisi);
    scanf("%d", &nbre_saisi);
   }
 while (nbre_saisi<0 || nbre_saisi>9999);
 nbre_inverse=0;

 while(nbre_saisi>0)
    {
     nbre_inverse *= 10;
     nbre_inverse += nbre_saisi%10;
     nbre_saisi /= 10;
    }

 /* Autre possibilité : */
 /* for (nbre_inverse=0 ; nbre_saisi>0 ; nbre_saisi/=10)
        nbre_inverse = nbre_inverse*10 + nbre_saisi%10;
 */
    printf("Le nombre 'inversé' est : %d\n", nbre_inverse);
    return 0;
}
