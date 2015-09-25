/*
 * Calcul du PGDC avec boucle while
 */

#include<stdio.h>
#include <math.h>

int main (void){

int a,b,tmp;

// Lire les 2 nombres
    printf("1er nombre >");
    scanf("%d",&a);

    printf("2eme nombre >");
    scanf("%d",&b);

    while(1){ // boucle infinie
        if (a<b){
            //Permuter les 2 nombres
            tmp=a;
            a=b;
            b=tmp;
        }
        if (a==b){
            //Fin : solution trouvée
            printf("Le PGDC est %d\n",a);
            return 0;
        }

        //Sinon retrancher le + petit du + grand nombre
        a-=b;
    }

}
