#include <stdio.h>
int main()
{
	printf("Enter number of days\n");
	int days,months,day;
	scanf("%d",&days);             // takes input from the user
	months=days/30;    
	day=days%30;       // Converts number of days to month
	printf("\nMonths=%d and Days= %d",months,day);// prints no. of months
	return 0;
}