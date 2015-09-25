/*
 * convert distance in miles to kilometers
 */

#include <stdio.h>
#define KMS_PER_MILE 1.609

int main (void)
{
	float miles, kms;

	/* get the distances in miles */

	printf("enter the distance in miles >");
	scanf("%f", &miles);

	/* convert the distance to kilometers */

	kms=KMS_PER_MILE*miles;

	/* display the distance in kilometers */

	printf("that equals %f kilometers\n\n",kms);

	return(0);
}





