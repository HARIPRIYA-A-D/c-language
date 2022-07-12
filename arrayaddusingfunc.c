#include<stdio.h>
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=add(a,n);
    printf("%d",b);
}
int add(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
