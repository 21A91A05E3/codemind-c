#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100]={0},k=0,m=-100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b[k++]=a[j]-a[i];
        }
    }
    for(i=0;i<k;i++)
    {
        if(b[i]>=m)
        {
            m=b[i];
        }
    }
    if(m>0)
    {
        printf("%d",m);
    }
    else
    {
        printf("0");
    }
    
}