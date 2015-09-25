/*
 * ITERATION FOR (8.6) : renvoyer la plus grande puissance de 2 inférieure à C=2'426'555'645
 */

#include <stdio.h>
#define C 2426555645

int puissance2(void);

int main(void){

    printf("%d\n",puissance2());

return 0;
}

int puissance2(void){
    int n=1,i;
    for(i=0;pow(2,n)<=C;i++,n++);

return i;
}

