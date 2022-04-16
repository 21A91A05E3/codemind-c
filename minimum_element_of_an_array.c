#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
        }

    }
    printf("%d",min);
}