#include<stdio.h>
int main()
{
    int n,k,a[100],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            break;
        }
        else
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}