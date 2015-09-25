#include <stdio.h>

void hilbert (void);
int pas_premier(int n);

int main (void){
puts("Les nombres de Hilbert jusqu'à 100");
hilbert();
printf("\nLes nombres premiers de Hilbert jusqu'à 100\n");
premier_hilbert();

//printf("%d",pas_premier());

return 0;
}

void hilbert (void){

    int hilb=0,i;

    for(i=0;;i++){
        hilb=4*i+1;
            if (hilb>100)
                return;         // avec break; ça marche aussi
        printf("%d\   ",hilb);
    }
return ;
}

void premier_hilbert (void){

    int hilb_1er=0,i;

    for(i=1;;i++){
        hilb_1er=4*i+1;
            if (hilb_1er>100)
                return;         // avec break; ça marche aussi
        if (!pas_premier(hilb_1er))
            printf("%d   ",hilb_1er);

            }

return ;
}


int pas_premier(int n){

    int j, hilb;

    for(j=1;;j++){
        hilb=4*j+1;

        if(hilb>=n)
            break;

        if(n%hilb==0)
            return 1; //1 si pas un nbre premier de hilbert
    }
return 0; //c'est un nombre 1er de hilbert

}
