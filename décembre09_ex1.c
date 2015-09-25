#include <stdio.h>
#include <string.h>

void p(int n);
int c (char *s);

int main (void){
	p(5423);
	
	printf("\n%d\n",c("23154"));
		printf("\n%d\n",c("2569"));
	printf("\n%d\n",c("Salut"));

	
}

void p (int n){
	if(n>0){
	
		p(n/10);
		printf("%d",n%10);
	}
 }
 
 int c (char *s){
 
	int i, n=0;
	
	for(i=0;i<strlen(s) && isdigit(s[i]);i++){
		n=n*10+(s[i]-'0');
	}
	
	return n;
 }