#include <stdio.h>
int main()
{
	printf("Enter First No.\n");
	int a;
	scanf("%d",&a);                    // Inputs Radius from user
		printf("Enter Second No.\n");
	int b;
	scanf("%d",&b);       
		printf("Enter Third No.\n");
	int c;
	scanf("%d",&c);   
	if(a>b && a>c)
	printf("%d is largest",a);   
	else if(b>a && b>c)
	 	printf("%d is largest",b);  
	else if(b>a && b>c)
	 	printf("%d is largest",c);  
	return 0;
}
	