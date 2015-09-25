#include <stdio.h>


float power (float x, int n);
float power_ameliore(float x, int n);


int main(void){

    float x;
    int n;

    scanf("%f %d",&x,&n);

  //  printf("\n%f\n",power(x,n));

    printf("\n%f\n",power_ameliore(x,n));

return 0;
}
/*
float power (float x, int n){

    if(n==1)
        return x;

    else
        return x*power(x,n-1);


}
*/
float power_ameliore(float x, int n){

    if(n==1)
        return x;

    if(n%2==0) // n est paire
        return x*x*power_ameliore(x,n/2);

    else                         //if(n%2!=0)
        return x*power_ameliore(x,n-1);

}

