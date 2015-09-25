#include <stdio.h>

void f (char c);

int main(void){

char a='A';

f(a);

return 0;

}

void f (char c){

    int i;

    for(i=128;i>0;i=i/2){

        if(c>=i){
            printf("1");
            c=c-i;
        }else{
            printf("0");
        }

    }
return ;
}
