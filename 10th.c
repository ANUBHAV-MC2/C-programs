#include <stdio.h>
int power(int a, int b)
{
    int x=1;
    for (int i = 1; i <= b; i++)
    {
        x = x*a;
    }
    
    return x;
}
int main()
{
    int a,b;
    printf("enter the no. u want to raise to a power\n");
    scanf("%d", &a);
    printf("enter the power u want to raise the entered no. to\n");
    scanf("%d", &b);
    printf("%d",power(a,b));
    return 0;
}