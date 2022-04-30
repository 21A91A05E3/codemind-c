#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,sx=0,sy=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        sx=sx+a[i];
        else
        sy=sy+a[i];
    }
    d=abs(sx-sy);
    if(d%4==0)
    printf("X");
    else
    printf("Y");
}