#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,s,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(a[i]);
        if(s*s==a[i])
        {
            t=t+a[i];
        }
    }
    printf("%d",t);
    
}