#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,x;
    int sum=0;
    printf("enter the size:");//5
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1 2 3 3 5 4//
    }
    scanf("%d",&x);
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n;k++)
            {
                sum=a[i]+a[j]+a[k];
            
             if(x==sum)
             {
                 printf("%d %d %d",a[i],a[j],a[k]);
             }
        }
        
        }
        return 0;
    }
    
    
        
    
}
