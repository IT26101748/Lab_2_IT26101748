#include <stdio.h>
int main (void)
{
	float perimeter,length,width;

	printf("Enter the perimeter of the rectangular fence: ");
	scanf("%f",&perimeter);

	length = perimeter /3.5;
	width = 0.75*length;

	printf("Calculated Length: %.2f\n", length);
	printf("Calculated width: %.2f\n", width);

	return 0;
}

