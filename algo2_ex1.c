/*
 * écrire table de multiplication de 1 à un chiffre donné
 */


#include <stdio.h>

void table (int n);

int main (void){

    int nbre;

    printf("Entrez un nombre ");
    scanf("%d",&nbre);
    table(nbre);

return 0;

}

void table (int n){

    int i,j;

    for(i=0;i<n;i++){
            printf("Table de  ");
        for(j=1;j<11;j++){
            printf("%d   ",(i+1)*j);
        }
    printf("\n");
    }


return ;
}
