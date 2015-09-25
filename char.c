#include <string.h>
#include<stdio.h>

int main (void){


char *tableau4[] = {
	"Peggy",
	"walter",
	"Bob",
	"dan",
	"alice",
	"Oscar",
	"carol",
	"Victor",
	"Eve",
	"Trent"
};

if(strcmp(tableau4[1],tableau4[2])==0){printf("s1=s2 \n s1=%s \n s2=%s",tableau4[2],tableau4[3]);}

else if (strcmp(tableau4[1],tableau4[2])>0){printf("s1>s2 \n s1=%s \n s2=%s",tableau4[2],tableau4[3]);}

else{printf("s1<s2\n s1=%s \n s2=%s",tableau4[2],tableau4[3]);}


return 0;
}
