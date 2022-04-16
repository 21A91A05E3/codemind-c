#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,es=0;
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
    }
    printf("%d",es);
}