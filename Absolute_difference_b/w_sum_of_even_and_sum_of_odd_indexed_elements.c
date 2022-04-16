#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,es=0,os=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+a[i];
        }
        else
        {
            os=os+a[i];
        }
    }
    res=abs(es-os);
    printf("%d",res);
}