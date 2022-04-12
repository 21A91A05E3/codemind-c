#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,j,t,s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s[i]=a[i]*a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
}