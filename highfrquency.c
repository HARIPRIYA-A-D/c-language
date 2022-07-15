#include<stdio.h>
int main()
{
    int a[100],i,j,n,maxcount=0,maxelement;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1 2 3 5 3
    }
    for(i=0;i<n-1;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        
        if(a[i]==a[j])
        {
           count++ ;
           if(count>maxcount)
           {
               maxelement=a[j];
               maxcount=count;
           }
        }
    }
printf("%d\n",maxelement);
        printf("%d",maxcount);
    
    return 0;
}
