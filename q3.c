#include <stdio.h>
int main()
{
    int i,n;
    int arr[100];
    float average=0,sum=0;
printf("Enter number of elements:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
average=sum/n;
printf("Average of number is:%f",average);
return 0;
}