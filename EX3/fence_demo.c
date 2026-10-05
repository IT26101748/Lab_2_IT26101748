#include <stdio.h>
int main (void)
{
	float perimeter,length,width;

	printf("Enter the perimeter of the rectangular fence(in metres): ");
	scanf("%f",&perimeter);

	length = (perimeter - 2*width)/2;
	width = length*3/4;

	printf("Calculated Length: %.2fm\n", length);
	printf("Calculated width: %.2fm\n", width);

	return 0;
}
