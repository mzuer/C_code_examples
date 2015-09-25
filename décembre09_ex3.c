#include <stdio.h>

int main (void){

 int code[11]={0,3,6,0,0,0,2,9,1,4,5};
 
 printf("chiffre de validation = %d \n",validation(code));


return 0;
}

int validation (int code[11]){

	int i, add=0, nbre=0;
	
	
	for(i=0;i<11;i+=2){
	add+=code[i];
	}
	
	add*=3;
	
	for(i=1;i<11;i+=2){
	add+=code[i];
	}
	
	nbre=add;
	
	do{
	nbre++;
	}
	while (nbre%10!=0);
	
	return nbre-add;


}