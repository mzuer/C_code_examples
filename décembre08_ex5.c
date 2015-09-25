#include <stdio.h>
#include <math.h>

int hanoi (int n){

    if(n==1)
        return 1;

    else
        return 2*hanoi(n-1)+1;

}


int hanoi_ameliore(int n){

    return pow(2,n)-1;

}

int main(void){

    int n;

    scanf("%d",&n);

    printf("\n%d\n",hanoi(n));
    printf("\n%d\n",hanoi_ameliore(n));

return 0;
}
