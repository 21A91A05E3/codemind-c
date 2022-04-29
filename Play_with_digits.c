#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            d=a[i]%10;
            a[i]=a[i]/10;
            s=s+d;
        }
    }
    printf("%d",s);
}