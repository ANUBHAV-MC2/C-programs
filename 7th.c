#include <stdio.h>
int main()
{
	char ch='A';
    int sum,sub,mul,mod;
	float div;
		printf("Enter The operation\n A- Addition \n S- Subtraction \n D-Division \n M-Multiplication \n R- Modulus\n");
	  scanf("%c",&ch);
	printf("\nEnter first No.\n");
	int num1;
	scanf("%d",&num1);              
    printf("Enter second No.\n");
	int num2=1;
	scanf("%d",&num2); 
	   printf("%c",ch);
	    sum=num1+num2;
	    sub=num1-num2;
	   div=(float)num1/num2;
	    mul=num1*num2;
	    mod=num1%num2;
	   switch(ch)
	   {
	   	case 'A':
	   		  printf("\n Sum= %d",sum);
	   		  break;
	   	case 'S':
	   		  printf("\n Difference= %d",sub);
	   		  break;
		case 'D':
	   		  printf("\n Division= %f",div);
	   		  break;
	 	case 'M':
	   		  printf("\n Multiplication= %d",mul);
	   		  break;	  	
	  	case 'R':
	   		  printf("\n Remainder= %d",mod);
	   		  break;
	   		}
	return 0;
}
	