/*
 * ITERATION WHILE : MACHINE DE VOTE
 *** ?? ne laisse pas le temps de rentrer
 */

 #include <stdio.h>

 int main (void){

     char cand,suite,choix;
     int nVotA=0, nVotB=0,stop=1;

    while(stop==1) {

        choix=0;
        printf("\nContinuer ? o/n");
        scanf("%c",&choix);

        if(choix=='n')
            stop=0;

        else {
                printf("\nJe vote pour A ou B: ");
                scanf("%c",&cand);

                if(cand=='A') nVotA++;
                else if(cand=='B') nVotB++;
        }
    }
    return 0;
}
