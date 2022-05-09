#include <stdio.h>
int main()
{
	printf("Enter a No.\n");
	int a,mod,num;
	scanf("%d",&a);                    // Inputs Radius from user
/* for(int i=a;i>=0;i--)
 {
 	mod=i%10;
 	num=num*10+mod;
 	i=i/10;
 }*/
 while(a!=0)
 {
 		mod=a%10;
 	num=num*10+mod;
 	a=a/10;
 }
 printf("%d",num);
	return 0;
}