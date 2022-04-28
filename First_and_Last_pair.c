#include<stdio.h>
int main()
{
    int n,a[100],i,l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=n-1;
    m=l/2;
    for(i=0;i<=l;i++,l--)
    {
        if(n%2==0)
        printf("%d %d ",a[i],a[l]);
        else
        {
            if(i!=m)
            printf("%d %d ",a[i],a[l]);
            else
            printf("%d %d",a[i],0);
        }

    }
}