/*
 * Tableau multidimensionnel : morpion
 */

#include<stdio.h>

int main (void){

char morpion [3][3];
int i,j;

for (i=0;i<3;i++)
    for (j=0;j<3;j++)
        morpion[i][j]='-';

morpion[1][1]='X';
morpion[0][2]='O';


    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%c",morpion[i][j]);
        }
    printf("\n");

    }
return 0;
 }
