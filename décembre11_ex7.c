#include <stdio.h>


void t(int n){

	if(n==49||n==9||n==4){
		printf("I");
		n++;
	}
	
	if(n>=50){
		printf("L");
		t(n-50);
	} else if(n>=10){
		printf("X");
		t(n-10);
	} else if(n>=5){
		printf("V");	
		t(n-5);
	} else if(n>0){
		printf("I");
		t(n-1);
	}
}
int main(void){
	int i;
	for(i=1;i<=98;i++){
	t(i);
	printf("\n");
	}
	}
	
	

