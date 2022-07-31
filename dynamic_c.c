#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int n;
printf("enter the size of array ");
scanf("%d",&n);
int *ptr;
ptr=(int *)malloc(n*sizeof(int));
if(ptr==NULL)
{
return 0;
} else
{
printf("enter the values in the array");
for(int i=0;i<n;i++)
{
scanf("%d",&ptr[i]);
}
int temp,flag;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(ptr[j]<ptr[i])
    {
    temp=ptr[j];
    ptr[j]=ptr[i];
  ptr[i]=temp;
   }
   
}
 }
 }
 printf("after sorting the array looks lie this:\n");
 for(int i=0;i<n;i++)
 {
    
         printf("%d",ptr[i]);
     
 }
 free(ptr);
return 0;
}
