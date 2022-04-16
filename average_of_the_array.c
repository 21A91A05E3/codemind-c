#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i;
    float s=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    printf("%.2f",avg);
}