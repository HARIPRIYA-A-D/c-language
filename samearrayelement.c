#include<stdio.h>
int main()
{
    int a[100],b[100],n,i,y,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
    }
    for(i=0;i<n;i++)
    {
        y=b[i];
    }
    if(x==y)
    {
        printf("yes");
    }
        else
        {
         printf("no");   
        }
    
    return 0;
}
