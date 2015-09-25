/*
 * Calcul de pi à l'aide de Maclaurin/Taylor
 */

#include <stdio.h>

double arctan(int x);

int main(void) {

    printf("Pi est environ égal à %lf",4*arctan(1));

return 0;

}


double arctan(int x){

    int i;
    double somme=0, num=1,element=0;


    for(i=1;;i+=2){         //for(i=1;element>0.001;i+=2)
                            //somme+=element;
        while(i>0){
            num*=x;
            i--;
        }

        element=num/i;

        if((i+1)%4==0)
            element=-element;
        else
            element=element;

        if(element<0.0001)      // /*
            break;

        somme+=element;         // */

    }

return somme;
}

