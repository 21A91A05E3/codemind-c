#include<stdio.h>
int main()
{
    int n,a[100],i,j,max=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(c==1 && a[i]>max)
        {
            d++;
            max=a[i];
        }
    }
    if(d!=0)
    printf("%d",max);
    else
    printf("-1");
}