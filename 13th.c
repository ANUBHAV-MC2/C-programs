#include <stdio.h>
int Swap(int *a, int *b)
{

    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main()
{
    int a, b;
    printf("enter the value of first variable\n");
    scanf("%d", &a);
    printf("enter the value of second variable\n");
    scanf("%d", &b);
    Swap(&a, &b);
    printf(" after swapping first variable is %d and second variable is %d", a, b);
    return 0;
}
