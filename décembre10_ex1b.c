#include <stdio.h>


int main(void){

    int i=2;

    switch (i){
    case 1:
        printf("1");
        break;
    case 2:
    case 3:
        printf("2");
        break;
    case 4:
        printf("3");
        break;
    default:
        printf("4");
    }

    printf("\n");

    if(i==1)
        printf("1");

    else if(i==2||i==3)
        printf("2");

    else if(i==4)
        printf("3");

    else
        printf("4");



return 0;
}

