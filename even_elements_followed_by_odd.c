#include<stdio.h>
int main()
{
    int n,a[100],i,e[100],o[100],ec=0,oc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[ec]=a[i];
            ec++;
        }
        else
        {
            o[oc]=a[i];
            oc++;
        }
    }
    for(i=0;i<ec;i++)
    {
        printf("%d ",e[i]);
    }
    for(i=0;i<oc;i++)
    {
        printf("%d ",o[i]);
    }
}