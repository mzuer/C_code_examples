/*
 * EXECUTION CONDITIONNELLE (5.3): LIRE 3 VARIABLES ET AFFCIHER LE MAX
 */

#include <stdio.h>

int main (void){

    int a,b,c,max;

    printf("Rentrez 3 variables : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        max=a;
    }

    else if (b>c){
        max=b;
    }

    else max=c;

    printf("le maximum des 3 est : %d",max);


// OU

    printf("\nRentrez 3 variables : ");
    scanf("%d %d %d",&a,&b,&c);

    if(b>a){
        max=b;
    }

    else
        max=a;

    if (c>max){
        max=c;
    }

    printf("le maximum des 3 est : %d",max);



return 0;
}
