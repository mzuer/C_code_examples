#include <stdio.h>

#define SENTINELLE -1

int main (void)
{
	int total, nombre;

	do
	{
	printf("Nombre (-1 pour terminer) : ");
	scanf("%d",&nombre);
	total+=nombre;
	}
	while (nombre!=SENTINELLE);

return 0;

}

