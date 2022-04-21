#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,s1=0,s2=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1=s1+a[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2=s2+a[i];
    }
    r=abs(s1-s2);
    printf("%d",r);
}