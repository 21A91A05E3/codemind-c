#include<stdio.h>
int main()
{
    int n,a[100],i,d[100],r[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i])
        {
            d[i]=a[i]%10;
            r[i]=r[i]*10+d[i];
            a[i]=a[i]/10;
        }
        printf("%d ",r[i]);
    }
}
 