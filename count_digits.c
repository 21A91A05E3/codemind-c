#include<stdio.h>
int main()
{
    int n,a[1000],i,dc=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        while(a[i]!=0)
        {
            d=a[i]%10;
            a[i]=a[i]/10;
            dc++;
        }
        if(dc>0)
        printf("%d ",dc);
        else
        printf("%d ",dc+1);
    }
}