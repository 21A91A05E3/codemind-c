#include<stdio.h>
int main()
{
    int n,i,a[100],t,b=0,s=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]>t)
        {
            b=b+2;
        }
        else
        {
            s=s+1;
        }
    }
    res=b+s;
    printf("%d ",res);
}