#include <stdio.h>

int main (void)
{
	float h1,h2,h3,avg,missing_height;
	printf("Enter the heights of 3 people: ");
	scanf("%f %f %f",&h1,&h2,&h3);

	printf("Enter the calculated average height: ");
	scanf("%f", &avg);

	missing_height = ((avg*5.0)-(h1+h2+h3))/2.0;

	printf("The missing heights are: %.2f and %.2f\n",missing_height,missing_height);

	return 0;
}
