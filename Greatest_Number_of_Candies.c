#include<stdio.h>
int main()
{
    int n,a[100],i,k,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=m)
        m=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+k>=m)
        printf("True ");
        else
        printf("False ");
    }
}