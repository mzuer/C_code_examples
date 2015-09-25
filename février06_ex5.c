#include <stdio.h>

#define NB_DIGITS 3
#define BASE 2

void f(int a[],int d, int b, int n){

    int i,j;

    for(i=0;i<b;i++){
        a[n]=i;
        if(n<d-1)
            f(a,d,b,n+1);
        else{
            for(j=0;j<d;j++)
                printf("%d", a[j]);
        printf("\n");
    }

}
}
int main(void){

    int a[NB_DIGITS];
    f(a,NB_DIGITS,BASE,0);

return 0;
}
