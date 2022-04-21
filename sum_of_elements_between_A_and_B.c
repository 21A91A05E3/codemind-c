#include<stdio.h>
int main()
{
    int n,ar[100],i,a,b,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]<a || ar[i]>b)
        {
            continue;
        }
        else
        {
            s=s+ar[i];
        }
    }
    printf("%d",s);
}