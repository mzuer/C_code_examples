
#include <stdio.h>

int f(int n,int f1,int f2);

int main(void){

    int n=7,f1=1,f2=1;

    printf("%d",f(n,f1,f2));

return 0;
}

int f(int n,int f1,int f2){

if(n==1||n==2)
    return 1;

else if (n==3)
    return f1+f2;

else
    return f(n-1,f1+f2,f1);

}
