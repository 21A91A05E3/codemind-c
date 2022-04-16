#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,os=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            os=os+a[i];
        }
    }
    printf("%d",os);
}