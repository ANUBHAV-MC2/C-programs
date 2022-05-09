#include <stdio.h>
int main()
{
	printf("Enter radius\n");
	int radius;
	scanf("%d",&radius);                    // Inputs Radius from user
	float area, volume;
	area=4*3.14*radius*radius;
	volume=(4/3)*3.14*radius*radius*radius;
	printf("\nArea=%f\n",area);
	printf("\nVolume=%f\n",volume);
	return 0;
}