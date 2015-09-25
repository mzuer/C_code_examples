#include <stdio.h>

int f (int n){

    int a=1, b=1;
    int i,c;

    for(i=3;i<=n;i++){

        c=a+b;
        a=b;
        b=c;
    }
    return b;
    }


int main(void){

    printf("Une super fonction\n");
    printf("f(%d)=%d\n",1,f(1));
        printf("f(%d)=%d\n",2,f(2));
            printf("f(%d)=%d\n",3,f(3));
                printf("f(%d)=%d\n",4,f(4));
                printf("f(%d)=%d\n",5,f(5));
                    printf("f(%d)=%d\n",6,f(6));
                    printf("f(%d)=%d\n",7,f(7));
                                        printf("f(%d)=%d\n",8,f(8));
                                                            printf("f(%d)=%d\n",9,f(9));

    return 0;


}
