#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,s1=0,s2=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
        s2=s2+b[i];
    }
    r=s2-s1;
    if(r>0)
    printf("%d",r);
    else
    printf("0");
}