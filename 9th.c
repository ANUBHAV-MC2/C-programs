#include <stdio.h>
int max(int a, int b, int c)
{
    if (a>b && a>c)
    {
        printf("the maximum of the 3 numbers is %d",a);
    }
    if (b>a && b>c)    
    {
        printf("the maximum of the 3 numbers is %d",b);
    }else{
        printf("the maximum of the 3 numbers is %d",c);
    }
    
    
}
int main()
{
    int x, y;
    int z;
    printf("Enter 1st no.\n");
    scanf("%d", &x);
    printf("Enter 2nd no.\n");
    scanf("%d", &y);
    printf("Enter 3rd no.\n");
    scanf("%d", &z);
    return max(x,y,z);
}