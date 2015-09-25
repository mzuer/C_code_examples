/*
 * Calcul du PPCM
 */
 
#include <stdio.h>

int ppmc(int a, int b);
int pgdc(int a, int b);


int main (void){

int a, b;

puts("Entrez a et b");
scanf("%d %d",&a,&b);

printf("ppmc : %d \n", ppmc(a,b));


return 0;
}

int ppmc(int a, int b){

return a*b/pgdc(a,b);

}


int pgdc(int a, int b){

	int temp;

	while(1){

	if(a<b){
	temp=a;
	a=b;
	b=temp;
	}


		if(a==b){
		return a;
		} 

		a-=b;
	}
}

