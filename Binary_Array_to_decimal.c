#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[n-i-1]*pow(2,i);
    }
    printf("%d",s);
}