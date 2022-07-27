//largest n smallest//
#include<stdio.h>
int main()
{
    int n,i,largest,sec_largest;
    printf("enter the size");
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            sec_largest=largest;
            largest=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>sec_largest && a[i]<largest)
        {
            sec_largest=a[i];
        }
    }
    printf("%d\n",largest);
    printf("%d",sec_largest);
    return 0;
}
